/*
 *
 * Project 2.
 *
 * Task:
 *		Write a program that copies a text file from standard input
 *		to standard output, removing all white-space characters
 *		from the beginning of each line. A line consisting entriely of
 *		white-space characters will not be copied.
 *
 * Date: 2026-03-23
 * Time: 01:30 AM
 *
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {
	char ch;
	bool flag = false;

	while ((ch = getc(stdin)) != EOF) {
		if (flag)
			putchar(ch);
		else if (!isspace(ch)) {
			flag = true;
			putchar(ch);
		}
		if (ch == '\n')	flag = false;
	}

	exit(EXIT_SUCCESS);
}
