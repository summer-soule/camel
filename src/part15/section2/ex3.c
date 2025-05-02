/*
 *
 * Task: We saw that writing #include <file> instead of #include "file"
 * 		 may not work if file is one that we've written. Would there be
 * 		 any problem with writing #include "file" instead of #include <file>
 * 		 if file is a system header?
 *
 * A:	 It works, but if somewhy we have header with system header's name,
 * 		 it will use local verion instead of system's. Also it is better
 * 		 for understanding to use <> braces for systemwide headers and
 * 		 "" brackets for project's local headers or any other files.
 *
 * Date: 2025-05-02
 * Time: 05:39 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"


int main(void) {
	bool test = false;

	printf("include \"stdbool.h\" is working well:\nbool test: %d\n", test);

	exit(EXIT_SUCCESS);
}
