/*
 *
 * Project 19.
 *
 * Task:
 *		(a) Write a program that converts a Windows text file to a UNIX
 *			text file. (See Section 22.1 for a discussion of the
 *			differences between Windows and UNIX text files.)
 *
 *		(b) Write a program that converts a UNIX text file to a Windows
 *			text file.
 *
 *		In each case, have the program obtain the names of both
 *		files from the command line.
 *
 *		Hint: Open the input file in "rb" mode and the output file
 *			  in "wb" mode.
 *
 * Date: 2026-01-07
 * Time: 11:24 PM
 *
 */

#define _POSIX_C_SOURCE 200112L

#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <unistd.h>

void w2u(FILE *fsrc, FILE *fdst);
void u2w(FILE *fsrc, FILE *fdst);

int main(int argc, char *argv[]) {
	FILE *fsrc, *fdst;
	char *options = "u:w:";
	int optres = 0;

	if (argc != 4) {
		fprintf(stderr, "usage: %s [-u | -w] source target\n", basename(argv[0]));
		fprintf(stderr, "\t-u    windows to unix convertion\n");
		fprintf(stderr, "\t-w    unix to windows convertion\n");
		exit(EXIT_FAILURE);
	}

	if ((fsrc = fopen(argv[2], "rb")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fdst = fopen(argv[3], "wb+")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((optres = getopt(argc, argv, options)) != -1) {
		switch (optres) {
		case 'u':
			w2u(fsrc, fdst);
			break;
		case 'w':
			u2w(fsrc, fdst);
			break;
		default:
			fprintf(stderr, "usage: %s [-u | -w] source target\n", basename(argv[0]));
			fprintf(stderr, "\t-u    windows to unix convertion\n");
			fprintf(stderr, "\t-w    unix to windows convertion\n");
			exit(EXIT_FAILURE);
		}
	}

	exit(EXIT_SUCCESS);
}

void u2w(FILE *fsrc, FILE *fdst) {
	char ch;
	while ((ch = fgetc(fsrc)) != EOF) {
		if (ch == '\x0a')
			fputc('\x0d', fdst);
		fputc(ch, fdst);
	}
}

void w2u(FILE *fsrc, FILE *fdst) {
	char ch;
	while ((ch = fgetc(fsrc)) != EOF) {
		if (ch != '\x0d' && ch != '\x1a')
			fputc(ch, fdst);
	}
}
