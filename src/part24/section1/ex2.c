/*
 *
 * Task:
 *		Write a call of assert that causes a program to terminate if
 *		a variable named top has the value NULL.
 *
 * Date: 2026-04-04
 * Time: 02:54 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void) {
	char str[] = "test";
	char *top = str;

    assert(top);
	printf("value of top: '%s'\n", top);
	printf("changing top to NULL...\n");

	top = NULL;

    assert(top);

	exit(EXIT_SUCCESS);
}
