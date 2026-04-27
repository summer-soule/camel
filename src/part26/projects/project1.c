/*
 *
 * Project 1.
 *
 * Task:
 *		(a) Write a program that calls the rand function 1000 times,
 *		printing the low-order bit of each value it returns (0 if the
 *		return value is even, 1 if it's odd). Do you see any patterns?
 *		(Often, the last few bits of rand's return value aren't
 *		especially random.)
 *
 *		(b) How can we improve the randomness of rand for generating
 *		numbers within a small range?
 *
 * Date: 2026-04-27
 * Time: 05:08 AM
 *
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

#define RANGE 10

void var_a(void);
void var_b(void);

int main(void) {
	var_a();
	var_b();

	exit(EXIT_SUCCESS);
}

void var_a(void) {
	for (int i = 0; i < 1000; i++) {
		printf("%d", rand() & 0x01);
	}
        putchar('\n');
}

void var_b(void) {
	puts("without better randomness");
	for (int i = 0; i < 10; i++)
		printf("%d", rand() % RANGE);
	putchar('\n');

	puts("with better randomness");
	for (int i = 0; i < 10; i++)
		printf("%d", rand() / (RAND_MAX / RANGE + 1));
	putchar('\n');
}
