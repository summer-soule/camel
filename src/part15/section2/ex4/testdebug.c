/*
 *
 * Task: (a) What is the output when the program is executed?
 * 		 (b) What is the output if the #define directive is removed from
 * 		 	 testdebug.c?
 * 		 (c) Explain why the output is different in parts (a) and (b).
 * 		 (d) Is it necessary for the DEBUG macro to be defined before
 * 		 	 debug.h is included in order for PRINT_DEBUG to have the
 * 		 	 desired effect? Justify your answer.
 *
 * Date: 2025-05-02
 * Time: 06:11 AM
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define DEBUG
#include "debug.h"

int main(void) {
	int i = 1, j = 2, k = 3;

#ifdef DEBUG
	printf("Output if DEBUG is defined:\n");
#else
	printf("Output if DEBUG is not defined:\n");
#endif

	PRINT_DEBUG(i);
	PRINT_DEBUG(j);
	PRINT_DEBUG(k);
	PRINT_DEBUG(i + j);
	PRINT_DEBUG(2 * i + j - k);

	exit(EXIT_SUCCESS);
}
