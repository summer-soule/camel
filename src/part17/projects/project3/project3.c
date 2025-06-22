/*
 *
 * Project 3.
 *
 * Task:
 * 		Modify the inventory2.c program of Section 17.5 by adding
 * 		an e (erase) command that allows the user to remove a part
 * 		from the database.
 *
 * Date: 2025-06-22
 * Time: 01:01 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "inventory.h"

struct part *inventory = NULL;

int main(void) {
	char code;

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
			case 'e': erase(&inventory);
					  break;
			case 'q': exit(EXIT_SUCCESS);
			default: printf("Illegal code\n");
		}
		putchar('\n');
	}
}
