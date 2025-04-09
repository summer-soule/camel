/*
 *
 * Task: If i is a variable and p points to i, which of the following
 * expressions are aliases for i?
 *
 * (a) *p
 * (b) &p
 * (c) *&p
 * (d) &*p
 * (e) *i
 * (f) &i
 * (g) *&i
 * (h) &*i
 *
 * A: a, c, d, f, g
 *
 * Date: 2025-04-09
 * Time: 07:24 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 1, *p = &i;

	int a = *p;
//	int b = &p;			// b is the address of pVar p
	int *c = *&p;
	int *d = &*p;
//	int e = *i;			// i is not a pVar
	int *f = &i;
	int g = *&i;
//	int h = &*i;		// indirection with int type instead of int * 
						// - same as (e)

	printf("i = %d\n", i);

	printf("(a): %d\n", a);
//	printf("(b): %d\n", b);
	printf("(c): %d\n", *c);
	printf("(d): %d\n", *d);
//	printf("(e): %d\n", e);
	printf("(f): %d\n", *f);
	printf("(g): %d\n", g);
//	printf("(h): %d\n", h);

	exit(EXIT_SUCCESS);
}
