/*
 *
 * Project 2.
 *
 * Task:
 *		Modify the inventory.c program of Section 16.3 so that the p (print)
 *		operation displays the parts sorted by part number.
 *
 * Date: 2025-05-19
 * Time: 04:58 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"
#include "quicksort.h"
#include "inventory.h"

struct part inventory[MAX_PARTS];

// number of parts currently stored
int num_parts = 0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

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
			default:
				printf("Illegal code\n");
		}
		printf("\n");
	}
}

int find_part(int number) {
	for (int i = 0; i < num_parts; i++)
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
	}
	else
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
	}
	else
		printf("Part not found.\n");
}

void print(void) {
	quicksort(inventory, 0, num_parts-1);

	printf("Part Number\t\tPart Name\t\t\tQuantity on Hand\n");
	for (int i = 0; i < num_parts; i++)
		printf("%7d			  %-25s%11d\n",
			   inventory[i].number,
			   inventory[i].name,
			   inventory[i].on_hand);
}
