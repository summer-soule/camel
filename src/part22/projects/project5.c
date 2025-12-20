/*
 *
 * Project 5.
 *
 * Task:
 *		The xor.c program of Section 20.1 refuses to encrypt bytes
 *		that -- in original or encrypted form -- are control characters.
 *		We can now remove this restriction. Modify the program so
 *		that the names of the input and output files are command-line
 *		arguments. Open both files in binary mode, and remove the test
 *		that checks whether the originnal and encrypted characters
 *		are printing characters.
 *
 * Date: 2025-12-20
 * Time: 04:14 AM
 *
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[]) {
	int ch;
	FILE *fin, *fout;
	if (argc != 3) {
		fprintf(stderr, "usage: project5 INPUT OUTPUT\n");
		exit(EXIT_FAILURE);
	}

	if ((fin = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fout = fopen(argv[2], "w")) == NULL) {
		fprintf(stderr, "can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while ((ch = fgetc(fin)) != EOF)
		fputc(ch ^ KEY, fout);

	exit(EXIT_SUCCESS);
}
