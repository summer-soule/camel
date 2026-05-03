/*
 *
 * Task:
 *		(C99) In each of the following statements, assume that the variable i
 *		has the indicated original type. Using macros from the <inttypes.h>
 *		header, modify each statement so that it will work correctly if the
 *		type of i is changed to the indicated new type.
 *
 *		(a) printf("%d", i);		Original type: int			New type: int8_t
 *		(b) printf("%12.4d", i);	Original type: int			New type: int32_t
 *		(c) printf("%-6o", i);		Original type: unsigned int	New type: uint16_t
 *		(d) printf("%#x", i);		Original type: unsigned int	New type: uint64_t
 *
 * Date: 2026-05-02
 * Time: 09:41 PM
 *
 */

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <inttypes.h>

int main(void) {
	int a = 0;
	int b = 1;
	unsigned int c = 2;
	unsigned int d = 3;

	printf("old types:\n");
	printf("%d" PRId8 "\n", a);
	printf("%12.4" PRId32 "\n", b);
	printf("%-6" PRIo16 "\n", c);
	printf("%#" PRIX64 "\n", d);

	int8_t anew = 0;
	int32_t bnew = 1;
	uint16_t cnew = 2;
	uint64_t dnew = 3;

	printf("\nnew types:\n");
	printf("%d" PRId8 "\n", anew);
	printf("%12.4" PRId32 "\n", bnew);
	printf("%-6" PRIo16 "\n", cnew);
	printf("%#" PRIX64 "\n", dnew);

	exit(EXIT_SUCCESS);
}
