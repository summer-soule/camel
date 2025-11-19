/*
 *
 * Task:
 *		Explain what effect the following macro has on its arguments.
 *		You may assume that the arguments have the same type.
 *
 *		#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))
 *
 * Date: 2025-11-19
 * Time: 08:13 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))

int main(void) {
	unsigned short x, y;

    x = 127;
    y = 63;

	M(x,y);

    printf("x: %d\n", x);
    printf("y: %d\n", y);

    printf("macro M(x,y) swaps values of x and y operands\n");

	exit(EXIT_SUCCESS);
}
