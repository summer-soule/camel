/*
 *
 * Project 6.
 *
 * Task:
 *		Write a program that copies a text file from standard input
 *		to a standard output, replacing each control character
 *		(other than \n) by a question mark.
 *
 * Date: 2026-03-30
 * Time: 06:54 AM
 *
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STR_MAX 4096

int main(void) {
	char str[STR_MAX];
	size_t len = 0;
	char *p = NULL;

	while ((p = fgets(str, STR_MAX, stdin))) {
		len = strlen(str);
		while (p < str+len) {
			if (iscntrl(*p))
				*p = '?';
			p++;
		}
		printf("%s", str);
	}

	exit(EXIT_SUCCESS);
}
