/*
 *
 * Task: Write a macro NELEMS(a) that computes the number of elements in a
 * one-dimensional array a.
 *
 * Hint: See the discussion of the sizeof operator in Section 8.1.
 *
 * Date: 2025-04-27
 * Time: 09:57 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define NELEMS(a) (sizeof(a)/sizeof(a[0]))

int main(void) {
	char arr[10] = {0};

	printf("array a contains %lu elements\n", NELEMS(arr));

	exit(EXIT_SUCCESS);
}
