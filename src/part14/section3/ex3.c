/*
 *
 * Task: Let DOUBLE be the following macro:
 *
 * 	#define DOUBLE(x) 2*x
 *
 * 	(a) What is the value of DOUBLE(1+2)?
 * 	(b) What is the value of 4/DOUBLE(2)?
 * 	(c) Fix the definition of DOUBLE.
 *
 * Date: 2025-04-27
 * Time: 10:21 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define DOUBLE(x) (2*(x))	// fix macro by adding braces around x and whole
							// replacement-list

int main(void) {
	printf("(a) DOUBLE(1+2): %d\n", DOUBLE(1+2));
	printf("(b) 4/DOUBLE(2): %d\n", 4/DOUBLE(2));

	exit(EXIT_SUCCESS);
}
