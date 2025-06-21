/*
 *
 * Project 1.
 *
 * Task:
 * 		Modify the inventory.c program of Section 16.3 so that the
 * 		inventory array is allocated dynamically and later reallocated
 * 		when it fills up. Use malloc initially to allocate enough
 * 		space for an array of 10 part structures. When the array has no
 * 		room for new parts, use realloc to double its size. Repeat
 * 		the doubling step each time the array becomes full.
 *
 * Date: 2025-06-14
 * Time: 08:21 PM
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
