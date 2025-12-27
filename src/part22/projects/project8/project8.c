/*
 *
 * Project 8.
 *
 * Task:
 *		Modify the inventory.c program of Section 16.3 by adding
 *		two new operations:
 *
 *		- Save the database in a specified file.
 *		- Load the database from a specified file.
 *
 *		Use the codes d (dump) and r (restore), respectively,
 *		to represent these operations. The interaction with the
 *		user should have the following appearance:
 *
 *		Enter operation code: d
 *		Enter name of output file: inventory.dat
 *
 *		Enter operation code: r
 *		Enter name of input file: inventory.dat
 *
 *		Hint: Use fwrite to write the array containing the parts
 *			  to a binary file. Use fread to restore the array by
 *			  reading it from a file.
 *
 * Date: 2025-12-27
 * Time: 09:23 AM
 *
 */

#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25
#define MAX_PARTS 100

struct part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
} inventory[MAX_PARTS];

int num_parts = 0;

int find_part(int number);
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
		case 'q':
			exit(EXIT_SUCCESS);
		case 'd':
			dump();
			break;
		case 'r':
			restore();
			break;
		default: printf("Illegal code\n");
		}
		printf("\n");
	}
}

int find_part(int number) {
	int i;

	for (i = 0; i < num_parts; i++)
		if (inventory[i].number == number)
			return i;
	return -1;
}

void insert(void) {
	int part_number;

	if (num_parts == MAX_PARTS) {
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &part_number);

	if (find_part(part_number) >= 0) {
		printf("Part already exists.\n");
		return;
	}

	inventory[num_parts].number = part_number;

	printf("Enter part name: ");
	read_line(inventory[num_parts].name, NAME_LEN);

	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[num_parts].on_hand);
	num_parts++;
}

void search(void) {
	int i, number;

	printf("Enter part number: ");
	scanf("%d", &number);

	i = find_part(number);

	if (i >= 0) {
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
	} else
		printf("Part not found.\n");
}

void update(void) {
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d", &number);

	i = find_part(number);

	if (i >= 0) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
	} else
		printf("Part not found.\n");
}

void print(void) {
	int i;

	printf("Part Number   Part Name                  "
		   "Quantity on Hand\n");

	for (i = 0; i < num_parts; i++)
	printf("%7d       %-25s%11d\n",
		   inventory[i].number,
		   inventory[i].name,
		   inventory[i].on_hand);
}

void dump(void) {
	FILE *fp;
	char dumpfile[PATH_MAX];

	printf("Enter name of output file: ");
	read_line(dumpfile, PATH_MAX);
        
	if ((fp = fopen(dumpfile, "w+")) == NULL) {
		fprintf(stderr, "dump: can't open %s file\n", dumpfile);
		return;
	}

	fwrite(inventory, sizeof(struct part), num_parts, fp);

	fclose(fp);
}

void restore(void) {
	FILE *fp;
	char dumpfile[PATH_MAX];

	printf("Enter name of input file: ");
	read_line(dumpfile, PATH_MAX);
        
	if ((fp = fopen(dumpfile, "r")) == NULL) {
		fprintf(stderr, "restore: can't open %s file\n", dumpfile);
		return;
	}

	num_parts = fread(inventory, sizeof(struct part), MAX_PARTS, fp);

    fclose(fp);
}
