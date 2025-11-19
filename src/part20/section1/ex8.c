/*
 *
 * Task:
 *		Let f be the following function:
 *
 *		unsigned int f(unsigned int i, int m, int n) {
 *			return (i >> (m + 1 - n)) & ~(~0 << n);
 *		}
 *
 *		(a) What is the value of ~(~0 << n)?
 *		(b) What does this function do?
 *
 * Date: 2025-11-20
 * Time: 12:11 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

unsigned int f(unsigned int i, int m, int n);

int main(void) {
	printf("value of ~(~0 << 4): %02x\n", ~((unsigned)~0 << 4));
    printf("(a) sets n lower bits to 1\n\n");

	printf("f(0xFF, 2, 4): %d\n", f(0xFF, 4, 2));
	printf("(b) function f() returns n bits of i starts from m\n");

	exit(EXIT_SUCCESS);
}

unsigned int f(unsigned int i, int m, int n) {
	return (i >> (m + 1 - n)) & ~(~0 << n);
}
