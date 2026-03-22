/*
 *
 * Project 3.
 *
 * Task:
 *		Write a program that copies a text file from standard input
 *		to standard output, capitalizing the first letter in each word.
 *
 * Date: 2026-03-23
 * Time: 01:27 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

int main(void) {
	FILE *fp1;
	char *p;
	char ifile[FILENAME_MAX];
	char buf[BUFSIZ];
	bool flag;

	printf("Enter file name: ");
    scanf("%s", ifile);

	if (!(fp1 = fopen(ifile, "r"))) {
		fprintf(stderr, "err: can't open file %s\n", ifile);
		exit(EXIT_FAILURE);
	}

	while (fgets(buf, BUFSIZ, fp1) != NULL) {
		p = buf;
		flag = false;
		while (*p != '\0') {
			if (flag == false && isprint(*p)) {
				*p = toupper(*p);
				flag = true;
			}
			if (isspace(*p))
				flag = false;
			p++;
		}
		printf("%s", buf);
	}

	fclose(fp1);

	exit(EXIT_SUCCESS);
}
