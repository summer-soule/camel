/*
 *
 * Task: Rewrite the following function to use pointer arithmetic instead of
 * array subsctipting. (In other words, eliminate the variable i and all
 * uses of the [] operator.) Make as few changes as possible.
 *
 *  int sum_array(const int a[], int n)
 *  {
 *  	int i, sum;
 *
 * 		sum = 0;
 * 		for (i = 0; i < n; i++)
 * 			sum += a[i];
 * 		return sum;
 * 	}
 *
 * Date: 2025-04-10
 * Time: 05:20 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L 10

int sum_array(const int a[], int n);

int main(void) {

	int arr[ARR_L] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	printf("sum of arr: %d\n", sum_array(arr, ARR_L));

	exit(EXIT_SUCCESS);
}

int
sum_array(const int a[], int n)
{
	int sum;

	for (const int *p = a; p < a + n; p++)
		sum += *p;
	return sum;
}
