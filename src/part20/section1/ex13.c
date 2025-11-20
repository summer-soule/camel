/*
 *
 * Task:
 *		If n is an unsigned int variable, what effect does the following
 *		statement have on the bits in n?
 *
 *		n &= n - 1;
 *
 *		Hint: Consider the effect on n if this statement is executed
 *			  more than once.
 *
 * Date: 2025-11-20
 * Time: 12:11 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned int n = 127;

    // removes the rightmost bit set to 1
    for (int i = 0; i < 4; i++) {
		printf("n: %d\n", n);
		n &= n - 1;
    }

	exit(EXIT_SUCCESS);
}
