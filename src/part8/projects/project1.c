/*
 *
 * Project 1.
 *
 * Task: Modify the repdigit.c program of Section 8.1 so that it shows which
 * (if any) were repeated:
 *
 * Enter a number: 939577
 * Repeated digit(s): 7 9
 *
 * Date: 2025-03-18
 * Time: 11:35 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARR_SIZE	10

int main(void) {
	int digit_seen[ARR_SIZE] = {0};
	bool flag = false;
	int digit;
	long n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit]) {
			digit_seen[digit]++;
			if (digit_seen[digit] > 1) flag = true;
			n /= 10;
			continue;
		}
		digit_seen[digit] = true;
		n /= 10;
	}

	if (flag) {
		printf("Repeated digit(s): ");
		for (int i = 0; i < ARR_SIZE; i++)
			if (digit_seen[i] > 1) printf("%d ", i);
		putchar('\n');
	}
	else
		printf("No repeated digit\n");

	exit(EXIT_SUCCESS);
}
