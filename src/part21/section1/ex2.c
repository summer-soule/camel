/*
 *
 * Task:
 *		Having located the header files on your system (see Exercise 1),
 *		find a standard header in which a macro hides a function.
 *
 * Answer:
 *		exp() macro from tgmath.h is hiding call of
 *      __TGMATH_UNARY_REAL_IMAG (Val, exp, cexp)
 *
 * Date: 2025-11-21
 * Time: 04:04 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int main(void) {
	printf("exp(5): %f\n", exp(5));

	exit(EXIT_SUCCESS);
}
