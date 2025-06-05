/*
 *
 * Task:
 *		Modify the print_part function of Section 16.2 so that
 *		its parameter is a pointer to a part structure.
 *		Use the -> operator in your answer.
 *
 * Date: 2025-06-05
 * Time: 07:53 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25

struct part {
	int number;
	char name[NAME_LEN + 1];
	int on_hand;
};

void print_part(struct part *p);

int main(void) {
	struct part *x;

	// allocate struct part x
	if ((x = malloc(sizeof(struct part))) != NULL) {
		strcpy(x->name, "SSD");
		x->number = 123;
		x->on_hand = 4;
	} else {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	// print x
	print_part(x);

	exit(EXIT_SUCCESS);
}

void print_part(struct part *p) {
	printf("Part number: %d\n", p->number);
	printf("Part name: %s\n", p->name);
	printf("Quantity on hand: %d\n", p->on_hand);
}
