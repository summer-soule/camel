/*
 *
 * Task: If i is an int variable and p and q are pointers to int, which of the
 * following assigments are legal?
 *
 * (a) p = i;
 * (b) *p = &i;
 * (c) &p = q;
 * (d) p = &q;
 * (e) p = *&q;
 * (f) p = q;
 * (g) p = *q;
 * (h) *p = q;
 * (i) *p = *q;
 *
 * A: e, f, i
 *
 * Date: 2025-04-09
 * Time: 09:56 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i = 1, *p = &i, *q = p;

//	p = i;		// pVar will contain value of Var instead of its address

//	*p = &i;	// value of pVar's object will change to address of i

//	&p = q;		// address can't be assigned to another address

//	p = &q;		// pVar can be assigned to the address of another pVar,
				// but it means nothing and produce warning
				// -Wincompatible-pointer-types

	p = *&q;	// valid
	printf("p = *&q: %d\n", *p);

	p = q;		// valid
	printf("p = q: %d\n", *p);

//	p = *q;		// if q points to i = 1, then *q will be 1, which
				// can't be an address of pVar

//	*p = q;		// if p points to i = 1, then *p will be 1, which
				// cant'be assigned to anything because it is the value
	*p = *q;
	printf("*p = *q: %d\n", *p);

	exit(EXIT_SUCCESS);
}
