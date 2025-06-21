#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "inventory.h"
#include "readline.h"

extern struct part *inventory;

int num_parts = 0;
int max_parts = 10;

int find_part(int number) {
	int i;

	for (i = 0; i < num_parts; i++)
		if (inventory[i].number == number)
			return i;
	return -1;
}

void insert() {
	int part_number;

	if (num_parts == max_parts) {
		if ((inventory = realloc(inventory, sizeof(struct part) * (max_parts *= 2))) == NULL) {
			printf("err: realloc failed\n");
			exit(EXIT_FAILURE);
		}
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

void search() {
	int i, number;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);

	if (i >= 0) {
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}
	else
		printf("Part not found.\n");
}

void update() {
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(number);

	if (i >= 0) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
	}
	else
		printf("Part not found.\n");
}

void print() {
	int i;

	printf("Part Number   Part Name                  "
		   "Quantity on Hand\n");
	for (i = 0; i < num_parts; i++)
		printf("%7d       %-25s%11d\n",
				inventory[i].number,
				inventory[i].name,
				inventory[i].on_hand);
}
