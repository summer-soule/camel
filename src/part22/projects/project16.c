/*
 *
 * Project 16.
 *
 * Task:
 *		Modify the fcopy.c program of Section 22.4 so that it uses
 *		fread and fwrite to copy the file in blocks of 512 bytes.
 *		(The last block may contain fewer than 512 bytes, of course.)
 *
 * Date: 2026-01-06
 * Time: 09:41 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 512

int main(int argc, char *argv[]) {
	FILE *source_fp, *dest_fp;
	char buffer[BUFSIZE];
	int read;

	if (argc != 3) {
		fprintf(stderr, "usage: fcopy source dest\n");
		exit(EXIT_FAILURE);
	}

	if ((source_fp = fopen(argv[1], "rb")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((dest_fp = fopen(argv[2], "w+")) == NULL) {
		fprintf(stderr, "Can't open %s\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	while ((read = fread(buffer, sizeof(char), BUFSIZE, source_fp)) > 0)
		fwrite(buffer, sizeof(char), read, dest_fp);

	fclose(source_fp);
	fclose(dest_fp);

	exit(EXIT_SUCCESS);
}
