/*
 *
 * Project 1.
 *
 * Task: Write a program that asks the user to enter a series of integers
 * (which it stores in an array), then sorts the integers by calling the
 * function selection_sort. When given an array with n elements, selection_sort
 * must do the following:
 *
 * 1. Search the array to find the largest element, then move it to the last
 * position in the array.
 * 2. Call itself recursively to sort the first n - 1 elements of the array.
 *
 * Date: 2025-03-28
 * Time: 06:54 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N	10

void
selection_sort(int [], int);

int
main(void) {
	int arr[N] = {0};

	printf("Enter %d elements: ", N);
	for (int i = 0; i < N; i++)
		scanf(" %d", &arr[i]);

	selection_sort(arr, N);

	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	putchar('\n');

	exit(EXIT_SUCCESS);
}

void
selection_sort(int a[], int n)
{
	if (n == 0) return;

	int largest = 0;
	int tmp = 0;

	for (int i = 0; i < n; i++) {
		printf("processing a[%d]: %d\n", i, a[i]);
		if (a[i] > a[largest]) {
			printf("found largest at %d, a[%d]: %d\n", i, i, a[i]);
			largest = i;
		}
	}

	printf("swap a[%d]: %d with a[%d]: %d\n", largest, a[largest], n-1, a[n-1]);
	tmp = a[largest];
	a[largest] = a[n-1];
	a[n-1] = tmp;

	if (n >= 0) selection_sort(a, n - 1);
}
