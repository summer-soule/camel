/*
 *
 * Project 7.
 *
 * Task: Modify the maxmin.c program of Section 11.4 so that the max_min
 * function uses a pointer instead of an integer to keep track of
 * the current position in the array.
 *
 * Date: 2025-04-12
 * Time: 12:43 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
	int b[N], i, big, small;

	printf("Enter %d numbers: ", N);
	for (i = 0; i < N; i++)
		scanf("%d", &b[i]);

	max_min(b, N, &big, &small);

	printf("Largest: %d\n", big);
	printf("Smallest: %d\n", small);

	exit(EXIT_SUCCESS);
}

void max_min(int a[], int n, int *max, int *min)
{
	int *p;

	*max = *min = a[0];

	for (p = &a[1]; p < a+n; p++) {
		if (*p > *max)
			*max = *p;
		else if (*p < *min)
			*min = *p;
	}
}
