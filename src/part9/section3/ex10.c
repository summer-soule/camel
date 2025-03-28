/*
 *
 * Task: Write functions that return the following values. (Assume that a and n
 * are parameters, where a is an array of int values and n is the length
 * of the array.)
 *
 * (a) The largest element in a.
 * (b) The average of all elements in a.
 * (c) The number of positive elements in a.
 *
 * Date: 2025-03-28
 * Time: 03:39 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE	10

int largest(int, int[]);
int average(int, int[]);
int positive_el(int, int[]);

int main(void) {
	int arr[ARR_SIZE] = { 1, 1, 5, 0, 2, 12, -1, 31, -42, 7 };

	printf("largest: %d\n", largest(ARR_SIZE, arr));
	printf("average: %d\n", average(ARR_SIZE, arr));
	printf("positive_el: %d\n", positive_el(ARR_SIZE, arr));

	exit(EXIT_SUCCESS);
}

int largest(int n, int a[])
{
	int tmp = 0;
	for (int i = 0; i < n; i++)
		tmp = a[i] > tmp ? a[i] : tmp;
	return tmp;
}
int average(int n, int a[])
{
	for (int i = 0; i < n; i++)
		a[0] += a[i];
	return a[0] / n;
}
int positive_el(int n, int a[])
{
	int i = 0;
	while (n-- > 0)
		if (a[n] > 0) i++;
	return i;
}
