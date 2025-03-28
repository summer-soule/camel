/*
 *
 * Task: Write a recursive version of the gcd function (see Exercise 3).
 * Here's the strategy to use for computing gcd(m, n): If n is 0, return m.
 * Otherwise, call gcd recursively, passing n as the first argument and m % n
 * as the second.
 *
 * Date: 2025-03-28
 * Time: 06:30 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int
gcd(int, int);

int main(void) {
	int m = 10;
	int n = 5;

	printf("GCD of %d and %d: %d\n", m, n, gcd(m, n));

	exit(EXIT_SUCCESS);
}

int
gcd(int m, int n)
{
	return (n == 0) ? m : gcd(n, m % n);
}
