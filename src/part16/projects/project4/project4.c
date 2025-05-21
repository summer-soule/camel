/*
 *
 * Project 2.
 *
 * Task:
 *		Modify the inventory.c program of Section 16.3 by adding a price
 *		member to the part structure. The insert function should ask the
 *		user for the price of a new item. The search and print functions
 *		should display the price. Add a new command that allows the user
 *		to change the price of a part.
 *
 * Date: 2025-05-21
 * Time: 17:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"
#include "quicksort.h"
#include "inventory.h"
#include <float.h>

int find_part(const struct part inventory[], int number, int num_parts);
void insert(struct part inventory[], int *num_parts);
void search(const struct part inventory[], int num_parts);
void update(struct part inventory[], int num_parts);
void print(struct part inventory[], int num_parts);
void price_change(struct part inventory[], int num_parts);

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
			case 'c':
				price_change(inventory, num_parts);
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

    printf("Enter price: ");
	scanf("%f", &inventory[*num_parts].price);
	
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
		printf("Price: %f\n", inventory[i].price);
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

	printf("Part Number\t\tPart Name\t\tQuantity on Hand\t\tPrice\n");
	for (int i = 0; i < num_parts; i++)
		printf("%11d			  %-20s%10d%21.2f\n",
			   inventory[i].number,
			   inventory[i].name,
			   inventory[i].on_hand,
			   inventory[i].price);
}

void price_change(struct part inventory[], int num_parts) {
	int number;
	float new_price;
	float old_price;
	
	printf("Enter part number: ");
	scanf("%d", &number);

	// check for part existence
	if ((number = find_part(inventory, number, num_parts)) == -1) {
		printf("err: there is no part with such number\n");
		return;
	}

	// save old price
	old_price = inventory[number].price;

	// print selected part info
	printf("Part selected: %s\n", inventory[number].name);
	printf("Current price: %.2f\n", inventory[number].price);

	// get new price from user
	printf("Enter new price: ");
    scanf("%f", &new_price);
	while (new_price < 0 || new_price > FLT_MAX) {
		printf("err: price must be between 0 and %.2f\n", FLT_MAX);
		printf("Enter new price: ");
		scanf("%f", &new_price);
	}

	// set price
	inventory[number].price = new_price;

	printf("New price set from %.2f to %.2f\n", old_price, new_price);
}
