/*
 *
 * Project 1.
 *
 * Task:
 *		Write a program that tests whether your compiler's "" (native)
 *		locale is the same as its "C" locale.
 *
 * Date: 2026-04-22
 * Time: 05:27 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(void) {
	char *l1, *l2;

	l1 = setlocale(LC_ALL, NULL);
    l2 = setlocale(LC_ALL, "");

	if (strcmp(l1, l2) == 0)
		printf("Native locale is same as \"C\" locale\n");
	else
		printf("Native locale is not same as \"C\" locale\n");

	exit(EXIT_SUCCESS);
}
