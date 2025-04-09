/*
 *
 * Project 3.
 *
 * Task: Modify Programming Project 3 from Chapter 6 so that it includes the
 * following function:
 *
 * 	void reduce(int numerator, int denominator,
 * 				int *reduced_numerator,
 * 				int *reduced_denominator);
 *
 * numerator and denominator are the numerator and denominator of a fraction.
 * reduced_numerator and reduced_denominator are pointers to variables in which
 * the function will store the numerator and denominator of the fraction once
 * it has been reduced to lowest terms.
 *
 * Date: 2025-04-09
 * Time: 06:47 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void reduce(int numerator, int denominator,
			int *reduced_numerator,
			int *reduced_denominator);

int main(void)
{
	int n, m;
	int n1, m1 = 0;

	printf("Enter a fraction: ");
	scanf("%d/%d", &n, &m);

	reduce(n, m, &n1, &m1);

	printf("In lowest terms: %d/%d\n", n1, m1);

	exit(EXIT_SUCCESS);
}

void reduce(int numerator, int denominator,
			int *reduced_numerator,
			int *reduced_denominator)
{
	int rem = 0;
	int n1 = numerator;
	int m1 = denominator;

	while (numerator != 0) {
		rem = denominator % numerator;
		denominator = numerator;
		numerator = rem;
	}

	*reduced_numerator = n1 / denominator;
	*reduced_denominator = m1 / denominator;
}
