/*
 *
 * Task: Which of the following would be valid prototypes for a function that
 * returns nothing and has one double parameter?
 *
 * (a) void f(double x);
 * (b) void f(double);
 * (c) void f(x);
 * (d) f(double x);
 *
 * A: (a), (b) valid. 
 * (c) not valid because of no parameter type specified
 * (d) not valid because of no return type specified
 *
 * Date: 2025-03-28
 * Time: 03:29 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("A: (a), (b) valid.\n");
	printf("(c) not valid because of no parameter type specified\n");
	printf("(d) not valid because of no return type specified\n");

	exit(EXIT_SUCCESS);
}
