/* 
 *
 * Project 2.
 *
 * Task: Write a program that asks the user to enter two integers, then
 * calculates and displays their greatest common divisor (GCD):
 *
 * Enter two integers: 12 28
 * Greatest common divisor: 4
 *
 * Hint: The classic algorithm for computing the GCD, known as Euclid's
 * algorithm, goes as follows: Let m and n be variables containing two
 * numbers. If n is 0, then stop: m contains the GCD. Otherwise, compute the
 * remainder when m is divided by n. Copy n into m and cope the remainder
 * into n. Then repeat the process, starting with testing whether n is 0.
 *
 * Date: 2025-02-12
 * Time: 08:05 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n, rem = 0;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	while (n != 0) {
		rem = m % n;
		m = n;
		n = rem;
	}

	printf("Greatest common divisor: %d\n", m);

	exit(EXIT_SUCCESS);
}
