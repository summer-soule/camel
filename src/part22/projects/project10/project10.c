/*
 *
 * Project 10.
 *
 * Task:
 *		Modify the inventory2.c program of Section 17.5 by adding the
 *		d (dump) and r (restore) operations described in Programming
 *		Project 8. Since the part structures aren't stored in an array,
 *		the d operation can't save them all by a single call of fwrite.
 *		Instead, it will need to visit each node in the linked list,
 *		writing the part number, part name, and quantity on hand to a file.
 *		(Don't save the next pointer; it won't be valid once the
 *		program terminates.) AS it reads parts from a file, the r operation
 *		will rebuild the list one node at a time.
 *
 * Date: 2025-12-28
 * Time: 02:15 PM
 *
 */

#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "readline.h"

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
	struct part *next;
};

struct part *inventory = NULL;

struct part *find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);
void dump(void);
void restore(void);

int main(void) {
	char code;

	for (;;) {
		printf("Enter operation code: ");
		scanf(" %c", &code);

		while (getchar() != '\n')
			;

		switch (code) {
		case 'i':
			insert();
			break;
		case 's':
			search();
			break;
		case 'u':
			update();
			break;
		case 'p':
			print();
			break;
		case 'd':
			dump();
			break;
		case 'r':
			restore();
			break;
		case 'q':
			exit(EXIT_SUCCESS);
		default:
			printf("Illegal code\n");
		}
		printf("\n");
	}
}

struct part *find_part(int number) {
	struct part *p;

	for (p = inventory;
		 p != NULL && number > p->number;
		 p = p->next)
		;

	if (p != NULL && number == p->number)
		return p;
	return NULL;
}

void insert(void) {
	struct part *cur, *prev, *new_node;

	new_node = malloc(sizeof(struct part));

	if (new_node == NULL) {
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &new_node->number);

	for (cur = inventory, prev = NULL;
		 cur != NULL && new_node->number > cur->number;
		 prev = cur, cur = cur->next)
		;

	if (cur != NULL && new_node->number == cur->number) {
		printf("Part already exists.\n");
		free(new_node);
		return;
	}

	printf("Enter part name: ");
	read_line(new_node->name, NAME_LEN);

	printf("Enter quantity on hand: ");
	scanf("%d", &new_node->on_hand);

	new_node->next = cur;

	if (prev == NULL)
		inventory = new_node;
	else
		prev->next = new_node;
}

void search(void) {
	int number;
	struct part *p;

    printf("Enter part number: ");
    scanf("%d", &number);

	p = find_part(number);

    if (p != NULL) {
		printf("Part name: %s\n", p->name);
		printf("Quantity on hand: %d\n", p->on_hand);
	} else
		printf("Part not found.\n");
}

void update(void) {
	int number, change;
	struct part *p;

	printf("Enter part number: ");
	scanf("%d", &number);

	p = find_part(number);

	if (p != NULL) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		p->on_hand += change;
	} else
		printf("Part not found.\n");
}

void print(void) {
	struct part *p;

	printf("Part Number   Part Name                  "
		   "Quantity on Hand\n");
	for (p = inventory; p != NULL; p = p->next)
		printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
}

void dump(void) {
	FILE *fdst;
	char fdstname[PATH_MAX];
	struct part *p = inventory;
	struct part q;

	printf("Enter name of output file: ");
	read_line(fdstname, PATH_MAX);

	if ((fdst = fopen(fdstname, "w+")) == NULL) {
		fprintf(stderr, "dump: can't open or create %s file\n", fdstname);
		return;
	}

    while (p) {
		q = *p;
		q.next = NULL;
		fwrite(&q, sizeof(struct part), 1, fdst);
		p = p->next;
    }
	fclose(fdst);
}

void restore(void) {
	FILE *fsrc;
	char fsrcname[PATH_MAX];
    struct part **p = NULL;
    struct part *q = NULL;
    struct part buffer;

	printf("Enter name of input file: ");
	read_line(fsrcname, PATH_MAX);

	if ((fsrc = fopen(fsrcname, "r")) == NULL) {
		fprintf(stderr, "restore: can't open or create %s file\n", fsrcname);
		return;
	}

    while (inventory) {
		q = inventory;
		inventory = inventory->next;
		free(q);
    }

	p = &inventory;

	while (fread(&buffer, sizeof(struct part), 1, fsrc) > 0) {
		if ((*p = malloc(sizeof(struct part))) == NULL) {
			fprintf(stderr, "restore: malloc failed\n");
			exit(EXIT_FAILURE);
		}

		(*p)->number = buffer.number;
		strcpy((*p)->name, buffer.name);
		(*p)->on_hand = buffer.on_hand;
		(*p)->next = NULL;
		p = &(*p)->next;
    }

	fclose(fsrc);
}
