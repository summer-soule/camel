/*
 *
 * Task: Write a function gcd(m, n) that calculates the greatest common divisor
 * of the integers m and n. (Programming Project 2 in Chapter 6 describes
 * Euclid's algorithm for computing the GCD.)
 *
 * Date: 2025-03-28
 * Time: 12:06 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int gcd (int, int);

int main(void) {
	int m, n;

	printf("Enter m and n: ");
	scanf("%d %d", &m, &n);

	printf("Greatest common divisor: %d\n", gcd(m, n));

	exit(EXIT_SUCCESS);
}

int gcd (int m, int n)
{
	int rem = 0;
	while (n != 0) {
		rem = m % n;
		m = n;
		n = rem;
	}
	return m;
}
