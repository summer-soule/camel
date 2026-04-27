/*
 *
 * Project 2.
 *
 * Task:
 *		Write a program that tests the atexit function. The program
 *		should have two functions (in addition to main), one of which
 *		prints That's all, and the other folks!. Use the atexit
 *		function to register both to be called at program termination.
 *		Make sure they're called in the proper order, so that we see
 *		the message That's all, folks! on the screen.
 *
 * Date: 2026-04-27
 * Time: 05:56 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void func1(void);
void func2(void);

int main(void) {
	atexit(func2);
	atexit(func1);

	exit(EXIT_SUCCESS);
}

void func1(void) {
	printf("That's all, ");
}

void func2(void) {
	printf("folks!\n");
}
