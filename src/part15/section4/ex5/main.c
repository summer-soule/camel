/*
 *
 * Task: Suppose that a program consists of three source files - main.c, f1.c,
 * 		 and f2.c - plus two header files, f1.h and f2.h. All three source
 * 		 files include f1.h, but only f1.c and f2.c include f2.h. Write a
 * 		 makefile for this program, assuming that the compiler is gcc and
 * 		 that the executable is to be named demo.
 *
 * Date: 2025-05-02
 * Time: 16:43 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include "f1.h"

int main(void) {
	printf("function from f1: %d\n", function1());

	exit(EXIT_SUCCESS);
}
