#include <stdlib.h>
#include <stdio.h>

#include "inventory.h"
#include "readline.h"

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
	}
	else
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
	}
	else
		printf("Part not found.\n");
}

void print(void) {
	struct part *p;

	printf("Part Number   Part Name                 "
		   "Quantity on Hand\n");
	for (p = inventory; p != NULL; p = p->next)
		printf("%7d       %-25s%11d\n", p->number, p->name, p->on_hand);
}

void erase(struct part **inventory) {
	struct part *p = *inventory;
	struct part *prev = NULL;
	int number;

	printf("Enter part number: ");
	scanf("%d", &number);

	while (p) {
		if (p->number == number) {
			if (prev == NULL) {
				*inventory = p->next;
				free(p);
				return;
			} else {
				prev->next = p->next;
				free(p);
				return;
			}
		}
		prev = p;
		p = p->next;
	}
	printf("Part not found.\n");
}
