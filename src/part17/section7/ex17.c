/*
 *
 * Task:
 * 		Let a be an array of 100 integers. Write a call of qsort
 * 		that sorts only the last 50 elements in a.
 * 		(You don't need to write the comparison function).
 *
 * Date: 2025-06-13
 * Time: 06:15 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b);

int main(void) {
	int a[100] = {0};

	for (int i = 0; i < 100; i++)
		a[i] = 99 - i;

	qsort(&a[50], 50, sizeof(a[0]), compare);

	for (int i = 0; i < 100; i++)
		printf("[%d]: %d\n", i, a[i]);

	exit(EXIT_SUCCESS);
}

int compare(const void *a, const void *b) {
	const int *A = a;
	const int *B = b;
	return (*A > *B) - (*A < *B);
}
