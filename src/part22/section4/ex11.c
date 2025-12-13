/*
 *
 * Task:
 *		The following loop appears in the fcopy.c program:
 *
 *		while ((ch = getc(source_fp)) != EOF)
 *			putc(ch, dest_fp);
 *
 *		Suppose that we neglected to put parentheses around ch = getc(source_fp):
 *
 *		while (ch = getc(source_fp) != EOF)
 *			putc(ch, dest_fp);
 *
 *		Woult the program compile without an error? If so, what would the
 *		program do when it's run?
 *
 * Answer:
 *		Since != have precedence over = operator, variable ch will get
 *		value 1 every call. As result, dest file will be filled by character
 *		with code 1 (SOH (start of heading)) instead of expected from src file.
 *
 * Date: 2025-12-14
 * Time: 01:02 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	FILE *source_fp, *dest_fp;
	int ch;

	if (argc != 3) {
		fprintf(stderr, "usage: fcopy source dest\n");
		exit(EXIT_FAILURE);
	}

	if ((source_fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((dest_fp = fopen(argv[2], "wb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		fclose(source_fp);
		exit(EXIT_FAILURE);
	}

	while (ch = getc(source_fp) != EOF)
		putc(ch, dest_fp);

	fclose(source_fp);
	fclose(dest_fp);

	exit(EXIT_SUCCESS);
}
