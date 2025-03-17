/*
 *
 * Task: Write a declaration of an array named weekend containing seven bool
 * values. Include an initializer that makes the first and last values
 * true; all ither values should be false.
 *
 * A: _Bool weekend[A_SIZE] = {[0] = true, [6] = true};
 *
 * Date: 2025-03-17
 * Time: 11:51 AM
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
