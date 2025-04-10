/*
 *
 * Task: Suppose that a is a one-dimensional array and p is a pointer variable.
 * Assuming that the assigment p = a has just been performed, which of the
 * following expressions are illegal because of mismatched types? Of the
 * remaining expressions, which are true (have a nonzero value)?
 *
 *  (a) p == a[0]
 *  (b) p == &a[0]
 *  (c) *p == a[0]
 *  (d) p[0] == a[0]
 *
 * illegal: a
 * true: b, c, d
 *
 * Date: 2025-04-10
 * Time: 04:21 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L 10

int main(void) {
	int a[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *p = a;

	//printf("p == a[0]: %d\n", p == a[0]);
	printf("p == &a[0]: %d\n", p == &a[0]);
	printf("*p == a[0]: %d\n", *p == a[0]);
	printf("p[0] == a[0]: %d\n", p[0] == a[0]);

	exit(EXIT_SUCCESS);
}
