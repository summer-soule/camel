/*
 *
 * Task:
 *		Write a function that returns a random double value d in the
 *		range 0.0 <= d < 1.0.
 *
 * Date: 2026-04-25
 * Time: 02:10 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

double drandomizer(void);

int main(void) {
	srand(clock() + getpid());
	for (int i = 0; i < 15; i++)
		printf("[%d]: %.1f\n", i, drandomizer());

	exit(EXIT_SUCCESS);
}

double drandomizer(void) {
	return (double) ((rand() % 10) * 0.1);
}
