/*
 *
 * Project 2.
 *
 * Task: Modify repdigit.c program of Section 8.1 so that it prints a table
 * showing how many times each digit appears in the number: 
 *
 * Enter a number: 41271092
 * Digit:			0 1 2 3 4 5 6 7 8 9
 * Occurrences:		1 2 2 0 1 0 0 1 0 1
 *
 * Date: 2025-03-18
 * Time: 12:05 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARR_SIZE	10

int main(void) {
	int digit_seen[ARR_SIZE] = {0};
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			digit_seen[digit]++;
			n /= 10;
			continue;
		}
		digit_seen[digit] = true;
		n /= 10;
	}

		printf("Digit:\t\t0 1 2 3 4 5 6 7 8 9\n");
		printf("Occurrences:\t");
		for (int i = 0; i < ARR_SIZE; i++)
			printf("%d ", digit_seen[i]);
		putchar('\n');

	exit(EXIT_SUCCESS);
}
