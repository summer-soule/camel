/*
 *
 * Task:
 *		(C99) Write the following function:
 *
 *		double evalutate_polynomial(double a[], int n, double x);
 *
 *		The function should return the value of the polynomial
 *		a[n]*x^(n) + a[n-1]*x^(n-1) + ... + a[0], where the a[i]'s are
 *		stored in correspinding elements of the array a, which has
 *		length n + 1. Have the function use Horner's Rule to compute
 *		the value of the polynomial:
 *
 *		((...((a[n]*x + a[n-1])*x + a[n-2]) * x + ...) * x + a[0]
 *
 *		Use the fma function to perform the multiplications and additions.
 *
 * Date: 2026-03-07
 * Time: 04:02 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define N 10
#define X 10

double evaluate_polynomial(double [], int, double);

int main(void) {
	double a[N];

	for (int i = 0; i < N; i++) a[i] = i;

	printf("evaluate: %f\n", evaluate_polynomial(a, N, X));

	exit(EXIT_SUCCESS);
}

double evaluate_polynomial(double a[], int n, double x) {
	double result = 0.0f;
	size_t i = 0;

	result = fma(a[n], x, a[n-(++i)]);

    while ((n - i) > 0) {
		result = fma(result, x, a[n-(++i)]);
	}

	return result;
}
