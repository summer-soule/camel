/*
 *
 * Project 3.
 *
 * Task:
 *		Write a program named fcat that "concatenates" any number
 *		of files by writing them to standard output, one after the
 *		other, with no break between files. For example, the following
 *		command will display the files f1.c, f2.c, and f3.c on the screen:
 *
 *		fcat f1.c f2.c f3.c
 *
 *		fcat should issue an error message of any file can't be opened.
 *
 *		Hint: Since it has no more than one file open at a time, fcat
 *			  needs only a single file pointer variable. Once it's
 *			  finished with a file, fcat can use the same variable
 *			  when it opens the next file.
 *
 * Date: 2025-12-20
 * Time: 03:19 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void fcat(char *filename);

int main(int argc, char *argv[]) {
	for (int i = 1; i < argc; i++)
		fcat(argv[i]);

	exit(EXIT_SUCCESS);
}

void fcat(char *filename) {
	FILE *fp;
	char ch;

	if ((fp = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "err: fcat can't open %s file\n", filename);
		exit(EXIT_FAILURE);
	}

	while ((ch = getc(fp)) != EOF)
		putchar(ch);

	fclose(fp);
}
