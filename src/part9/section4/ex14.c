/*
 *
 * Task: The following function is supposed to return true if any element
 * of the array a has the value 0 and false if all elements are nonzero.
 * Sadly, it contains an error. Find the error and show how to fix it:
 *
 * bool has_zero(int a[], int n)
 * {
 * 		int i;
 *
 * 		for (i = 0; i < n; i++)
 * 		if (a[i] == 0)
 * 			return true;
 * 		else
 * 			return false;
 * }
 *
 * Date: 2025-03-28
 * Time: 05:28 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define N	5

bool has_zero(int [], int);

int main(void) {
	int arr1[N] = {1, 2, 3, 4, 5};
	int arr2[N] = {0, 2, 3, 4, 5};

	printf("arr1 without 0: %d\n", has_zero(arr1, N));
	printf("arr2 with 0: %d\n", has_zero(arr2, N));

	exit(EXIT_SUCCESS);
}

bool has_zero(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		if (a[i] == 0) return true;

	return false;
}
