/*
 *
 * Task: Rewrite the following function to use pointer arithmetic instead of
 * array subscripting. (In other words, eliminate the variable i and all uses
 * of the [] operator.) Make as few changes as possible.
 *
 * 	void store_zeros(int a[], int n)
 * 	{
 * 		int i;
 *
 * 		for (i = 0; i < n; i++)
 * 			a[i] = 0;
 * 	}
 *
 * Date: 2025-04-10
 * Time: 06:59 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L	10

void store_zeros(int a[], int n);

int main(void) {
	int arr[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *q = arr;

	while (q < arr+ARR_L)
		printf("%d ", *q++);
	putchar('\n');

	store_zeros(arr, ARR_L);

	q = arr;
	while (q < arr+ARR_L)
		printf("%d ", *q++);
	putchar('\n');
	
	exit(EXIT_SUCCESS);
}

void store_zeros(int a[], int n)
{
	for (int *p = a; p < a + n; p++)
		*p = 0;
}
