/*
 *
 * Project 1.
 *
 * Task:
 *		Extend the canopen.c program of section 22.2 so that the user may
 *		put any number of file names on the command line:
 *
 *		canopen foo bar baz
 *
 *		The program should print a separate can be opened or can't be
 *		opened message for each file. Have the program terminate with
 *		status EXIT_FAILURE if one or more of the files can't be opened.
 *
 * Date: 2025-12-20
 * Time: 01:59 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void topen(char *);

int main(int argc, char *argv[]) {

	if (argc == 1) {
		printf("usage: canopen <filename1 ...>\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 1; i < argc; i++)
		topen(argv[i]);

	exit(EXIT_SUCCESS);
}

void topen(char *filename) {
	FILE *fp;

	if ((fp = fopen(filename, "r")) == NULL) {
		printf("%s can't be opened\n", filename);
		return;
	} else {
		printf("%s can be opened\n", filename);
	}

	fclose(fp);
}
