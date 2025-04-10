/*
 *
 * Task: Write the following function:
 *
 * 	double inner_product(const double *a, const double *b,
 * 						 int n);
 *
 * a and b both point to arrays of length n. The function should return
 * a[0] * b[0] + a[1] * b[1] + ... + a[n-1] * b[n-1]. Use pointer arithmetic
 * - not subscripting - to visit array elements.
 *
 * Date: 2025-04-10
 * Time: 07:27 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L	10

double inner_product(const double *a, const double *b, int n);

int main(void) {
	const double arr_a[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	const double arr_b[ARR_L] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

	printf("Inner product: %f\n", inner_product(arr_a, arr_b, ARR_L));

	exit(EXIT_SUCCESS);
}

double inner_product(const double *a, const double *b, int n)
{
	double iProduct = 0;

	const double *a_ptr = a;
	const double *b_ptr = b;

	while (a_ptr < a + n && b_ptr < b + n)
		iProduct += *a_ptr++ * *b_ptr++;

	return iProduct;
}
