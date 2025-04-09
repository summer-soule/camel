/*
 *
 * Task: Write the following function:
 *
 * 	int *find_largest(int a[], int n);
 *
 * When passed an array a of length n, the function will return a pointer to
 * the array's largest element.
 *
 * Date: 2025-04-09
 * Time: 06:06 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define ARR_L	10

int *find_largest(int a[], int n);

int main(void) {
	int arr[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p;

	p = find_largest(arr, ARR_L);

	printf("Largest: %d\n", *p);

	exit(EXIT_SUCCESS);
}

int *find_largest(int a[], int n)
{
	int max = 0, tmp = INT_MIN;
	for (int i = 0; i < ARR_L; i++)
		if (a[i] > tmp) {
			tmp = a[i];
			max = i;
		}
	return &a[max];
}
