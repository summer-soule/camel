/*
 *
 * Project 2.
 *
 * Task:
 *		Modify the inventory.c program of Section 16.3 by making inventory
 *		and num_parts local to the main function.
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

int find_part(const struct part inventory[], int number, int num_parts);
void insert(struct part inventory[], int *num_parts);
void search(const struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void print(struct part inventory[], int num_parts);

int main(void) {
	char code;
	struct part inventory[MAX_PARTS];
	int num_parts = 0;
	
	for (;;) {
		printf("Enter operation code: ");
		scanf(" %c", &code);
		while (getchar() != '\n')
			;
		switch (code) {
			case 'i':
				insert(inventory, &num_parts);
				break;
			case 's':
				search(inventory, num_parts);
				break;
			case 'u':
				update(inventory, num_parts);
				break;
			case 'p':
				print(inventory, num_parts);
				break;
			case 'q':
				exit(EXIT_SUCCESS);
			default:
				printf("Illegal code\n");
		}
		printf("\n");
	}
}

int find_part(const struct part inventory[], int number, int num_parts) {
	for (int i = 0; i < num_parts; i++)
		if (inventory[i].number == number)
			return i;
	return -1;
}

void insert(struct part inventory[], int *num_parts) {
	int part_number;
	if (*num_parts == MAX_PARTS) {
		printf("Database is full; can't add more parts.\n");
		return;
	}

	printf("Enter part number: ");
	scanf("%d", &part_number);

	if (find_part(inventory, part_number, *num_parts) >= 0) {
		printf("Part already exists.\n");
		return;
	}

	inventory[*num_parts].number = part_number;
	printf("Enter part name: ");
	read_line(inventory[*num_parts].name, NAME_LEN);
	printf("Enter quantity on hand: ");
	scanf("%d", &inventory[*num_parts].on_hand);
	(*num_parts)++;
}

void search(const struct part inventory[], int num_parts) {
	int i, number;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(inventory, number, num_parts);
	if (i >= 0) {
		printf("Part name: %s\n", inventory[i].name);
		printf("Quantity on hand: %d\n", inventory[i].on_hand);
	}
	else
		printf("Part not found.\n");
}

void update(struct part inventory[], int num_parts) {
	int i, number, change;

	printf("Enter part number: ");
	scanf("%d", &number);
	i = find_part(inventory, number, num_parts);
	if (i >= 0) {
		printf("Enter change in quantity on hand: ");
		scanf("%d", &change);
		inventory[i].on_hand += change;
	}
	else
		printf("Part not found.\n");
}

void print(struct part inventory[], int num_parts) {
	quicksort(inventory, 0, num_parts-1);

	printf("Part Number\t\tPart Name\t\t\tQuantity on Hand\n");
	for (int i = 0; i < num_parts; i++)
		printf("%7d			  %-25s%11d\n",
			   inventory[i].number,
			   inventory[i].name,
			   inventory[i].on_hand);
}
