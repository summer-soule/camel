/*
 *
 * Task: Write a function digit(n, k) that returns the k'th digit (from the
 * right) in n (a positive integer). For example, digit(829, 1) returns 9,
 * digit(829, 2) returns 2, and digit(829, 3) returns 8. If k is greater than
 * the number of digits in n, have the function return 0.
 *
 * Date: 2025-03-28
 * Time: 02:53 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int
digit(int, int);

int main(void) {
	int n, k;

	printf("Enter number: ");
	scanf("%d", &n);

	printf("Enter position k: ");
	scanf("%d", &k);

	printf("The number in position %d is %d\n", k, digit(n, k));

	exit(EXIT_SUCCESS);
}

	unsigned int
digit (int n, int k)
{
	while (k-- > 0)
		n = k > 0 ? n / 10 : n % 10;
	return n;
}
