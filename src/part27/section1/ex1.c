/*
 *
 * Task:
 *		(C99) Locate the declarations of the intN_t and uintN_t types
 *		in the <stdint.h> header installed on your system.
 *		Which values of N are supported?
 *
 * Date: 2026-05-02
 * Time: 09:52 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include <stdint.h>

#define PRINT_RANGE(n, k, l) printf( "int" #n "_t: %" #l ":%" #l "\n", k ## n ## _MIN, k ## n ## _MAX);
#define PRINT_URANGE(n, k, l) printf( "uint" #n "_t: %" #l ":%" #l "\n", k ## n ## _MIN, k ## n ## _MAX);

int main(void) {
	PRINT_RANGE(8, INT, d)
	PRINT_RANGE(16, INT, d)
	PRINT_RANGE(32, INT, d)
	PRINT_RANGE(64, INT, ld)

	putchar('\n');

	PRINT_URANGE(8, INT, d)
	PRINT_URANGE(16, INT, d)
	PRINT_URANGE(32, INT, d)
	PRINT_URANGE(64, INT, ld)

	exit(EXIT_SUCCESS);
}
