/*
 *
 * Task:
 *		Suppose that u is the following union:
 *
 *		union {
 *			double a;
 *			struct {
 *				char b[4];
 *				double c;
 *				int d;
 *			} e;
 *			char f[4];
 *		} u;
 *
 *		If char values occupy one byte, int values occupy four bytes,
 *		and double values occupy eight bytes, how much space will a
 *		C compiler allocate for u? (Assume that the compiler leaves
 *		no "holes" between members.)
 *
 * Answer:
 *		Compiler will allocate 24 bytes with holes and 16 bytes whout them.
 *
 * Date: 2025-05-18
 * Time: 03:54 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

union {
	double a;
    struct {
        char b[4];
        double c;
        int d;
    } e;
	char f[4];
} u;

int main(void) {
	printf("%lu\n", sizeof(u));
	
	exit(EXIT_SUCCESS);
}
