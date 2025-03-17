/*
 *
 * Task: (C99) Repeat Exercise 3, but this time use a designated initializer.
 * Make the initializer as short as possible.
 *
 * A: _Bool weekend[A_SIZE] = {[0] = true, [6] = true};
 *
 * Date: 2025-03-17
 * Time: 12:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define A_SIZE 7

int main(void) {
	_Bool weekend[A_SIZE] = {[0] = true, [6] = true};

	for (int i = 0; i < A_SIZE; i++)
		printf("weekend[%d] = %d\n", i, weekend[i]);

	exit(EXIT_SUCCESS);
}
