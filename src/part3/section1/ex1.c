//-----------------------------------------------------------------------------
//
// Q: What output do the following calls of printf produce?
//
// (a) printf("%6d,%4d", 86, 1040);
// (b) printf("%12.5e", 30.253);
// (c) printf("%.4f", 83.162);
// (d) printf("%-6.2g", .0000009979);
//
// A:
//
// (a) |    86,1040|
// (b) | 3.02530e+01|
// (c) |83.1620
// (d) |1e-06 |
//
// Date: 2025-1-10
// Time: 8:03 AM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("|%6d,%4d|\n", 86, 1040);
	printf("|%12.5e|\n", 30.253);
	printf("|%.4f|\n", 83.162);
	printf("|%-6.2g|\n", .0000009979);

	exit(EXIT_SUCCESS);
}
