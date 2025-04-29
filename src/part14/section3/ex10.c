/*
 *
 * Task: Functions can often -- but not always -- be written as parameterized
 * 		 macros. Discuss what characteristics of a function would make it
 * 		 unsuitable as a macro.
 *
 * A:	 Recursive functions and arguments with side effects might be not
 * 		 suitable as a macro.
 *
 * Date: 2025-04-29
 * Time: 02:17 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("Recursive functions and arguments with side effects might be\n"
		   "not suitable as a macro\n");

	exit(EXIT_SUCCESS);
}
