/* 
 *
 * Project 3.
 *
 * Task: Write a program that asks the user to enter a fraction, then reduces
 * the fraction to lowest terms:
 *
 * Enter a fraction: 6/12
 * In lowest terms: 1/2
 *
 * Hint: To reduce a fraction to lowest terms, first compute the GCD of the
 * numerator and denominator. Then divide both the numerator and denominator
 * by the GCD.
 *
 * Date: 2025-02-12
 * Time: 9:16 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, m, rem = 0;
	int n1, m1 = 0;

	printf("Enter a fraction: ");
	scanf("%d/%d", &n, &m);

	n1 = n;
	m1 = m;

	while (n != 0) {
		rem = m % n;
		m = n;
		n = rem;
	}

	printf("In lowest terms: %d/%d\n", n1 / m, m1 / m);
	exit(EXIT_SUCCESS);
}
