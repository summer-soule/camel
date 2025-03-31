/*
 *
 * Project 6.
 *
 * Task: Write a function that computes the value of the following polynomial:
 *
 * 3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6
 *
 * Write a program that asks the user to enter a value for x, calls the
 * function to compute the value of the polynomial, and then displays the value
 * returned by the function.
 *
 * Date: 2025-03-31
 * Time: 06:15 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compute_poly(int);

int main(void) {
	int x;

	printf("Enter x value: ");
	scanf("%d", &x);

	printf("3*x^5 + 2*x^4 - 5*x^3 - x^2 + 7*x - 6 = %d\n",
			compute_poly(x));

	exit(EXIT_SUCCESS);
}

int
compute_poly(int x)
{
	return (int) (3 * pow(x, 5)
				+ 2 * pow(x, 4)
				- 5 * pow(x, 3)
				- pow(x, 2)
				+ 7 * x
				- 6);
}
