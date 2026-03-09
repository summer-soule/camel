/*
 *
 * Task:
 *		(C99) Check the documentation for your compiler to see if
 *		it performs contraction on arithmetic expressions and, if so,
 *		under what circumstances.
 *
 * Date: 2026-03-09
 * Time: 10:48 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("from \"Floating point implementation\" section of GCC 15.2.1 20260214:\n\n"
           "Expressions are currently only contracted if '-ffp-contract=fast',\n"
           "'-funsafe-math-optimizations' or '-ffast-math' are used. This is\n"
           "subject to change.\n");

	exit(EXIT_SUCCESS);
}
