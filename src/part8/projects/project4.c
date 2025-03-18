/*
 *
 * Project 4.
 *
 * Task: Modify the reverse.c program of Section 8.1 to use the expression
 * (int) (sizeof(a) / sizeof(a[0])) (or a macro with this value) for the
 * array length.
 *
 * Date: 2025-03-18
 * Time: 03:09 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10
#define N_SIZE	(int) (sizeof(a) / sizeof(a[0]))

int main(void) {
	int a[N], i;

	printf("Enter %d numbers: ", N_SIZE);

	for (i = 0; i < N_SIZE; i++)
		scanf("%d", &a[i]);

	printf("In reverse order:");
	for (i = N_SIZE - 1; i >= 0; i--)
		printf(" %d", a[i]);
	printf("\n");

	exit(EXIT_SUCCESS);
}
