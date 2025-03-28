/*
 *
 * Task: Write the following function:
 *
 * double inner_product(double a[], double b[], int n);
 *
 * The function should return a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]
 *
 * Date: 2025-03-28
 * Time: 04:22 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N	5

double
inner_product(double [], double [], int);

int main(void) {
	double a[N] = { 1.0, 2.5, 3.6, 0.1, 2.4 };
	double b[N] = { 1.6, 3.1, 10.3, 0.5, 1.3 };

	printf("inner_product: %f\n", inner_product(a, b, N));

	exit(EXIT_SUCCESS);
}

double
inner_product(double a[], double b[], int n)
{
	double tmp = 0;
	for (int i = 0; i < n; i++)
		tmp += a[i] * b[i];
	return tmp;
}
