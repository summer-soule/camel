/*
 *
 * Task: Suppose that the function f has the following definition:
 *
 * int f (int a, int b) { ... }
 *
 * Which of the following statements are legal? (Assume that i has type int
 * and x has type double.)
 *
 * (a) i = f(83, 12);
 * (b) x = f(83, 12);
 * (c) i = f(3.15, 9.28);
 * (d) x = f(3.15, 9.28);
 * (e) f(83, 12);
 *
 * A:
 * (a), (b), (e) are legal
 * (c) and (d) are legal but lose fraction because of double to int conversion.
 *
 * Date: 2025-03-28
 * Time: 03:12 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int f (int, int);

int main(void) {
	int i;
	double x;

	i = f(83, 12);
	printf("(a) i = %d\n", i);
	x = f(83, 12);
	printf("(b) x = %f\n", x);
	i = f(3.15, 9.28);
	printf("(c) i = %d\n", i);
	x = f(3.15, 9.28);
	printf("(d) x = %f\n", x);
	printf("(e) %d\n", f(83, 12));

	exit(EXIT_SUCCESS);
}

int f (int a, int b)
{
	return a + b;
}
