/*
 *
 * Task:
 *		Suppose that s is the following structure:
 *
 *		struct {
 *			double a;
 *			union {
 *				char b[4];
 *				double c;
 *				int d;
 *			} e;
 *			char f[4];
 *		} s;
 *
 *		If char values occupy one byte, int values occupy four bytes, and
 *		double values occupy eight bytes, how much space will a C compiler
 *		allocate for s? (Assume that the compiler leaves no "holes"
 *		between members.)
 *
 * Answer:
 *		Compiler will allocate 24 bytes with alignment and 20 without:
 *			8 for double
 *			8 for biggest member in union which is double
 *			4 for char f[4]
 *			and 4 bytes for alignment in union.
 *
 * Date: 2025-05-18
 * Time: 03:08 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct {
	double a;
    union {
		char b[4];
		double c;
		int d;
	} e;
	char f[4];
} s;

int main(void) {
	printf("%lu\n", sizeof(s));
	
	exit(EXIT_SUCCESS);
}
