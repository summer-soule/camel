/*
 *
 * Task:
 *		Which property of a variable determines whether or not it has
 *		a default initial value?
 *
 *		(a) Storage duration
 *		(b) Scope
 *		(c) Linkage
 *		(d) Type
 *
 * A:   (a) is the answer. Static storage duration defaults to 0 if
 *		none provided.
 *
 * Date: 2025-09-03
 * Time: 12:37 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

static int xmpl;

int main(void) {
	printf("static int xmpl: %d\n", xmpl);

	exit(EXIT_SUCCESS);
}
