/*
 *
 * Project 17.
 *
 * Task:
 *		Write a program that reads a series of phone numbers from a file
 *		and displays them in a standard format. Each line of the file
 *		will contain a single phone number, but the numbers may be in a
 *		variety of formats. You may assume that each line contains
 *		10 digits, possibly mixed with other characters (which should
 *		be ignored). For example, suppose that the file contains the
 *		following lines:
 *
 *		404.817.6900
 *		(215) 686-1776
 *		312-746-6000
 *		877 275 5273
 *		6173434200
 *
 *		The output of the program should have the following appearance:
 *
 *		(404) 817-6900
 *		(215) 686-1776
 *		(312) 746-6000
 *		(877) 275-5273
 *		(617) 343-4200
 *
 *		Have the program obtain the file name from the command line.
 *
 * Date: 2026-01-06
 * Time: 10:16 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <libgen.h>
#include <ctype.h>

#define BUFSIZE 50

int main(int argc, char *argv[]) {
	FILE *fsrc;
	char buf[BUFSIZE];
	char *p;
	int n1, n2, n3;
	char digits[BUFSIZE];

	if (argc != 2) {
		fprintf(stderr, "usage: %s source\n", basename(argv[0]));
		exit(EXIT_FAILURE);
	}

	if ((fsrc = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (fgets(buf, BUFSIZE, fsrc) != NULL) {
		n1 = -1, n2 = -1, n3 = -1;
		p = buf;
		int i = 0;
		while (*p != '\0') {
			if (isdigit(*p))
				digits[i++] = *p;
			p++;
		}

        sscanf(digits, "%3d%3d%4d", &n1, &n2, &n3);

		printf("(%d) %d-%d\n", n1, n2, n3);
	}

	fclose(fsrc);

	exit(EXIT_SUCCESS);
}
