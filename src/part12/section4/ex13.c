/*
 *
 * Task: Section 8.2 had a program fragment in which two nested for loops
 * initialized the array ident for use as an identity matrix. Rewrite this
 * code, using a single pointer to step through the array one element at
 * a time.
 *
 * Hint: Since we won't be using row and col index variables, it won't be easy
 * to tell where to store 1. Instead, we can use the fact that the first
 * element of the array should be 1, the next N elements should be 0, the next
 * element should be 1, and so forth. Use a variable to keep track of how many
 * consecutive 0s have been stored; when the count reaches N, it's time to
 * store 1.
 *
 * Date: 2025-04-10
 * Time: 10:01 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void) {
	double ident[N][N], *ident_ptr = ident[0];
	int i = 0;

	while (ident_ptr < ident[N-1] + N)
		*ident_ptr++ = (i++ % (N+1)) == 0 ? 1 : 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++)
			printf("%.0f ", ident[i][j]);
		putchar('\n');
	}

	exit(EXIT_SUCCESS);
}
