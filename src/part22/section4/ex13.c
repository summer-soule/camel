/*
 *
 * Task:
 *		Write the following function:
 *
 *		int line_length(const char *filename, int n);
 *
 *		The function should return the length of line n in the text file
 *		whose name is filename (assuming that the first line in the file
 *		is line 1). If the line doesn't exist, the function should return 0.
 *
 * Remark:
 *		There is no way to distinguish non-existent line from line with
 *		0 characters, so I decide to check for both scenarios.
 *
 * Date: 2025-12-14
 * Time: 02:20 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int line_length(const char *, int);

int main(int argc, char *argv[]) {
	if (argc != 3) {
		fprintf(stderr, "usage: ex13 filename line_number\n");
		exit(EXIT_FAILURE);
	}

	printf("file: %s\n", argv[1]);

	printf("line %d in %s is %d characters long.\n",
		   atoi(argv[2]),
		   argv[1],
		   line_length(argv[1], atoi(argv[2])));

	exit(EXIT_SUCCESS);
}

int line_length(const char *filename, int n) {
	FILE *fp;
    int len = 0;
    char ch;

	if ((fp = fopen(filename, "r")) == NULL) {
		fprintf(stderr, "[ERR]line_length: fopen failed\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 1; i < n; i++)
		while ((ch = fgetc(fp)) != '\n')
			if (ch == EOF) {
				fprintf(stderr, "[ERR]line_length: there is no %d line\n", n);
				exit(EXIT_FAILURE);
			}

	if ((ch = fgetc(fp)) == EOF) {
		fprintf(stderr, "[ERR]line_length: there is no %d line\n", n);
		exit(EXIT_FAILURE);
	}
	ungetc(ch, fp);

	while ((ch = fgetc(fp)) != '\n' && ch != EOF)
		len++;

	fclose(fp);

	return len;
}
