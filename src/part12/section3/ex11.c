/*
 *
 * Task: Modify the find_largest function so that it uses pointer arithmetic -
 * not subscripting - to visit array elements.
 *
 * Date: 2025-04-10
 * Time: 09:25 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define ARR_L	10

int *find_largest(int a[], int n);

int main(void) {
	int arr[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	printf("Largest: %d\n", *find_largest(arr, ARR_L-1));

	exit(EXIT_SUCCESS);
}

int *find_largest(int a[], int n)
{
	int max = a[0], i = 0;

	while (i++ < n)
		if (*(a+i) > max)
			max = *(a+i);

	return a+max;
}
