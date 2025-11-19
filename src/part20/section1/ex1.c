/*
 *
 * Task:
 *		Show the output produced by each of the following program fragments.
 *		Assume that i, j, and k are unsigned short variables.
 *
 *		(a) i = 8; j = 9;
 *		    printf("%d", i >> 1 + j >> 1);
 *
 *		(b) i = 1;
 *		    printf("%d", i >> 1 + j >> 1);
 *
 *		(c) i = 2; j = 1; k = 0;
 *			printf("%d", ~i & j ^ k);
 *
 *		(d) i = 7; j = 8; k = 9;
 *		    printf("%d", i ^ j & k);
 *
 * Date: 2025-11-19
 * Time: 03:59 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	unsigned short i, j, k;

    i = 8;
    j = 9;
    printf("(a): %d\n", i >> 1 + j >> 1);

    i = 1;
    printf("(b): %d\n", i >> 1 + j >> 1);

    i = 2;
    j = 1;
    k = 0;
    printf("(c): %d\n", ~i & j ^ k);

    i = 7;
    j = 8;
    k = 9;
    printf("(d): %d\n", i ^ j & k);
  
	exit(EXIT_SUCCESS);
}
