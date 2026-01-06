/*
 *
 * Project 15.
 *
 * Task:
 *		Modify the justify program of Section 15.3 so that it reads from
 *		one text file and writes to another. Have the program obtain
 *		the names of both files from the command line.
 *
 * Date: 2025-12-31
 * Time: 02:20 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <libgen.h>

#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

void usage(char *);

int main(int argc, char *argv[]) {
	FILE *fsrc, *fdst;

	char word[MAX_WORD_LEN+2];
	int word_len;

    if (argc != 3) {
		usage(basename(argv[0]));
		exit(EXIT_FAILURE);
    }

	if ((fsrc = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

    if ((fdst = fopen(argv[2], "w+")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[2]);
		exit(EXIT_FAILURE);
    }

	clear_line();
	for (;;) {
		read_word(word, MAX_WORD_LEN+1, fsrc);
		word_len = strlen(word);

		if (word_len == 0) {
			flush_line(fdst);
			return 0;
		}

		if (word_len > MAX_WORD_LEN)
			word[MAX_WORD_LEN] = '*';

		if (word_len + 1 > space_remaining()) {
			write_line(fdst);
			clear_line();
		}

		add_word(word);
	}
}

void usage(char *progname) {
	printf("usage: %s SOURCE DEST\n", progname);
	printf("\tSOURCE\t\tthe file from which the program receives data\n");
	printf("\tDEST\t\tthe file in which the program outputs the result\n");
}
