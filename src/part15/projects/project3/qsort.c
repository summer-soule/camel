/*
 *
 * Project 3.
 *
 * Task:
 *		Modify the qsort.c program of Section 9.6 so that the quicksort
 *		and split functions are in a separate file named quicksort.c.
 *		Create a header file named quicksort.h that contains prototypes
 *		for the two functions and have both qsort.c and quicksort.c
 *		include this file.
 *
 * Date: 2025-05-13
 * Time: 14:23 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "quicksort.h"

int main(void) {
	int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
		scanf("%d", &a[i]);

    quicksort(a, 0, N - 1);

    printf("In sorted order: ");
    for (i = 0; i < N; i++)
		printf("%d ", a[i]);
    printf("\n");

	exit(EXIT_SUCCESS);    
}      
