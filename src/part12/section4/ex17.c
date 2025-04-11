/*
 *
 * Task: Rewrite the following function to use pointer arithmetic instead of
 * array subscripting. (In other words, eliminate the variables i and j and
 * all uses of the [] operator.) Use a single loop instead of nested loops.
 *
 * 	int sum_two_dimensional_array(const int a[][LEN], int n)
 * 	{
 * 		int i, j, sum = 0;
 *
 * 		for (i = 0; i < n; i++)
 * 			for j = 0; j < LEN; j++)
 * 				sum += a[i][j];
 *
 * 		return sum;
 * 	}
 *
 * Date: 2025-04-11
 * Time: 11:47 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define LEN	10

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void) {
	const int arr[3][LEN] = {
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9},
		{10, 11, 12, 13, 14, 15, 16, 17, 18, 19},
		{20, 21, 22, 23, 24, 25, 26, 27, 28, 29}};

	printf("sum of array elements: %d\n",
			sum_two_dimensional_array(arr, 3));

	exit(EXIT_SUCCESS);
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
	int sum = 0;
	const int *p = a[0];
	while (p < a[0]+(n*LEN))
		sum += *p++;
	return sum;
}
