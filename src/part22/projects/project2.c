/*
 *
 * Project 2.
 *
 * Task:
 *		Write a program that converts all letters in a file to upper case.
 *		(Characters other than letters shouldn't be changed.) The program
 *		should obtain the file name from the command line and write its
 *		output to stdout.
 *
 * Date: 2025-12-20
 * Time: 02:51 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
	FILE *fp;
	char ch;

	if (argc > 2) {
		fprintf(stderr, "usage: project2 FILENAME\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "%s can't be opened\n", argv[1]);
		exit(EXIT_FAILURE);
	}

    while ((ch = fgetc(fp)) != EOF) {
		if (islower(ch))
            putchar(toupper(ch));
		else
			putchar(ch);
	}

	exit(EXIT_SUCCESS);
}
