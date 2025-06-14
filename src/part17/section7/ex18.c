/*
 *
 * Task:
 * 		Modify the compare_parts function so that parts are sorted
 * 		with their numbers in descending order.
 *
 * Date: 2025-06-13
 * Time: 08:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
	struct part *next;
};

struct part *inventory = NULL;

int compare_parts(const void *p, const void *q);
struct part *create_part(struct part *inv, int number, char *name, int on_hand);
void print(void);

int main(void) {

	inventory = create_part(inventory, 123, "SSD", 5);
	inventory = create_part(inventory, 23, "HDD", 2);
	inventory = create_part(inventory, 667, "NIC", 10);
	inventory = create_part(inventory, 10, "GPU", 5);
	inventory = create_part(inventory, 11, "CPU", 5);

	qsort(inventory, 5, sizeof(struct part), compare_parts);
	print();

	exit(EXIT_SUCCESS);
}

int compare_parts(const void *p, const void *q) {
	return (((struct part *) q)->number - ((struct part *) p)->number);
}

struct part *create_part(struct part *inv, int number, char *name, int on_hand) {
	struct part *p = NULL;

	if ((p = malloc(sizeof(struct part)))) {
		p->number = number;
		p->on_hand = on_hand;
		strcpy(p->name, name);
		p->next = inv;
		return p;
	} else {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}

void print(void) {
	struct part *p;
	printf("Part Number\t\tPart Name\t\t\tQuantity on Hand\n");
	for (p = inventory; p != NULL; p = p->next)
		printf("%7d\t\t%-25s%11d\n", p->number, p->name, p->on_hand);
}
