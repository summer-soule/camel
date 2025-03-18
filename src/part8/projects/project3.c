/*
 *
 * Project 3.
 *
 * Task: Modify repdigit.c program of Section 8.1 so that the user can enter
 * more than one number to be tested for repeated digits. The program should
 * terminate when the user enters a number that's less than or equal to 0.
 *
 * Date: 2025-03-18
 * Time: 12:11 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DIGITS 10

int main(void) {
	bool digit_seen[DIGITS] = {false};
	int digit;
	long n = 0;
	long n_tmp = 0;	// current processing number

	printf("Enter a number: ");

	while (scanf(" %ld", &n) == 1) {
		if (n <= 0) break;

		n_tmp = n;

		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}

		if (n > 0)
			printf("Repeated digit in number %ld\n", n_tmp);
		else
			printf("No repeated digit\n");

		// reset digit_seen to false
		for (int i = 0; i < DIGITS; i++) digit_seen[i] = false;
	}

	exit(EXIT_SUCCESS);
}
