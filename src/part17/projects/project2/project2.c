/*
 *
 * Project 2.
 *
 * Task:
 * 		Modify the inventory.c program of Section 16.3 so that the
 * 		p (print) command calls qsort to sort the inventory array
 * 		before it prints the parts.
 *
 * Date: 2025-06-22
 * Time: 12:38 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "inventory.h"

struct part *inventory = NULL;

int main(void) {
	char code;

	if ((inventory = malloc(max_parts * sizeof(struct part))) == NULL) {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	for (;;) {
		printf("Enter operation code: ");
		scanf(" %c", &code);

		while (getchar() != '\n')
			;

		switch (code) {
			case 'i': insert();
					  break;
			case 's': search();
					  break;
			case 'u': update();
					  break;
			case 'p': print();
					  break;
			case 'q': exit(EXIT_SUCCESS);
			default:
					  printf("Illegal code\n");
		}
		printf("\n");
	}
}
