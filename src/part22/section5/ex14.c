/*
 *
 * Task:
 *		(a) Write your own version of the fgets function. Make it behave
 *			like the real fgets function as possible; in particular, make
 *			sure that it has the proper return value. To avoid conflicts
 *			with the standard library, don't name your function fgets.
 *		(b) Write your own version of fputs, following the same rules
 *			as in part (a).
 *
 * Date: 2025-12-14
 * Time: 04:52 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

char *fgets_(char *restrict s, int n, FILE *restrict stream);
int fputs_(const char *restrict s, FILE *restrict stream);

int main(int argc, char *argv[]) {
	FILE *fp;
    char string[100];

	if (argc != 2) {
		fprintf(stderr, "usage: ex14 filename\n");
		fprintf(stderr, "       fill that file with some string and maybe more\n");
		exit(EXIT_FAILURE);
	}

	if ((fp = fopen(argv[1], "r+")) == NULL) {
		fprintf(stderr, "err: fopen failed\n");
		exit(EXIT_FAILURE);
	}

	fgets_(string, 100, fp);
    printf("string: %s\n", string);

	fputs_(string, fp);

	exit(EXIT_SUCCESS);
}

char *fgets_(char *restrict s, int n, FILE *restrict stream) {
	int i;
	char ch;

	for (i = 0; i < n; i++) {
        if ((ch = fgetc(stream)) == EOF) {
			if (i == 0 || ferror(stream))
				return NULL;
		break;
		}
		s[i] = ch;
		if (ch == '\n')
			break;
    }

	s[i] = '\0';

    return s;
}

int fputs_(const char *restrict s, FILE *restrict stream) {
	while (*s != '\0') {
		if (putc(*s, stream) == EOF)
			return EOF;
		s++;
	}
	return 1;
}
