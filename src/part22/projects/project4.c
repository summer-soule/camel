/*
 *
 * Project 4.
 *
 * Task:
 *		(a) Write a program that counts the number of characters in
 *			a text file.
 *		(b) Write a program that counts the number of words in a
 *			text file. (A "word" is any sequence of non-white-space
 *			characters.)
 *		(c) Write a program that counts the number of lines in a text file.
 *
 *		Have each program obtain the file name from the command line.
 *
 * Date: 2025-12-20
 * Time: 03:32 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int var_a(FILE *file);
int var_b(FILE *file);
int var_c(FILE *file);

int main(int argc, char *argv[]) {
	FILE *fp;

	if (argc == 1) {
		fprintf(stderr, "usage: project4 FILENAME\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "err: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

        printf("file %s contains:\ncharacters: %d\nwords: %d\nlines: %d\n",
               argv[1], var_a(fp), var_b(fp), var_c(fp));

	exit(EXIT_SUCCESS);
}

int var_a(FILE *file) {
	int chars_num = 0;

	rewind(file);
	while (fgetc(file) != EOF)
		chars_num++;

	return chars_num;
}

int var_b(FILE *file) {
    int words_num = 0;
	int i = 0;
    char ch;

    rewind(file);
	while ((ch = fgetc(file)) != EOF) {
		if (!isspace(ch))
			i++;
		if (isspace(ch) && i != 0) {
			words_num++;
			i = 0;
		}
	}

    return words_num;
}

int var_c(FILE *file) {
	int lines_num = 0;
	char ch;

	rewind(file);
	while ((ch = fgetc(file)) != EOF)
		if (ch == '\n')
			lines_num++;

	return lines_num;
}
