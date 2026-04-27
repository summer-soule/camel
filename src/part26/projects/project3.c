/*
 *
 * Project 3.
 *
 * Task:
 *		Write a program that uses the clock function to measure how
 *		long it takes qsort to sort an array of 1000 integers that
 *		originally in reverse order. Run the program for arrays of
 *		10000 and 100000 integers as well.
 *
 * Date: 2026-04-27
 * Time: 06:07 AM
 *
 */

#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRSIZE(i) sizeof(arr##i) / sizeof(arr##i[0])

void sortmeasuretime(int *, int);
void arrinit(int *, int);

int compar(const void *, const void *);

int main(void) {
	int arr1[(size_t)10e2];
	int arr2[(size_t)10e3];
	int arr3[(size_t)10e4];

	arrinit(arr1, ARRSIZE(1));
	arrinit(arr2, ARRSIZE(2));
    arrinit(arr3, ARRSIZE(3));

	puts("measuring arr1");
	sortmeasuretime(arr1, ARRSIZE(1));
	puts("\nmeasuring arr2");
	sortmeasuretime(arr2, ARRSIZE(2));
	puts("\nmeasuring arr3");
	sortmeasuretime(arr3, ARRSIZE(3));

	exit(EXIT_SUCCESS);
}

void arrinit(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		arr[i] = n - i;
	}
}

int compar(const void *a, const void *b) {
	const int *ia = a;
	const int *ib = b;

	return (*ia > *ib) - (*ia < *ib);
}

void sortmeasuretime(int *arr, int n) {
	printf("arr size: %d\n", n);

	struct timespec start, end;

	clock_gettime(CLOCK_MONOTONIC, &start);
	qsort(arr, n, sizeof(arr[0]), compar);
	clock_gettime(CLOCK_MONOTONIC, &end);

	double elapsed =
        (end.tv_sec - start.tv_sec) + (end.tv_nsec - start.tv_nsec) * 1e-9;

	printf("sorting time: %.9fs, %.3fns\n", elapsed, elapsed * 1e6);
}
