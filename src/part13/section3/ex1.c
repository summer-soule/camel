/*
 *
 * Task: The following function calls supposedly write a single new-line
 * character, but some are incorrect. Identify which calls don't work and
 * explain why.
 *
 * 	(a) printf("%c", '\n');
 * 	(b) printf("%c", "\n");		// %c spec expects int type,
 * 								// but *string provided
 * 	(c) printf("%s", '\n');		// %s spec expects *string format,
 * 								// but int provided
 * 	(d) printf("%s", "\n");		
 * 	(e) printf('\n');			// printf expects *string format,
 * 								// but int provided
 * 	(f) printf("\n");
 * 	(g) putchar('\n');
 * 	(h) putchar("\n");			// putchar expects int type, but
 * 								// *string provided
 * 	(i) puts('\n');				// puts expects *string, but int provided
 * 	(j) puts("\n");
 * 	(k) puts("");
 *
 * Date: 2025-04-16
 * Time: 06:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("%c", '\n');
//	printf("%c", "\n");
//	printf("%s", '\n');
	printf("%s", "\n");
//	printf('\n');
	printf("\n");
	putchar('\n');
//	putchar("\n");
//	puts('\n');
	puts("\n");
	puts("");

	exit(EXIT_SUCCESS);
}
