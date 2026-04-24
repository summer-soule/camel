/*
 *
 * Task:
 *		Write a statement that randomly assigns one of the numbers
 *		7, 11, 15, or 19 to the variable n.
 *
 * Date: 2026-04-25
 * Time: 01:56 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	int n;

	srand(time(NULL));

	for (int i = 0; i < 15; i++) {
		switch (rand() % 4) {
		case 0:
			n = 7; break;
		case 1:
			n = 11; break;
		case 2:
			n = 15; break;
		case 3:
			n = 19; break;
		}
		printf("[%d]: %d\n", i, n);
	}

	exit(EXIT_SUCCESS);
}
