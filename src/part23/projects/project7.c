/*
 *
 * Project 7.
 *
 * Task:
 *		Write a program that counts the number of sentences in a text
 *		file (obtained from standard input). Assume that each sentence
 *		ends with a ., ?, or ! followed by a white-space character
 *		(including \n).
 *
 * Date: 2026-03-31
 * Time: 09:24 AM
 *
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
	bool possible_end = false;
	char ch;
	size_t sentences = 0;

	while ((ch = getchar()) != EOF) {
		if (possible_end && isspace(ch)) {
			sentences++;
			possible_end = false;
		}
		else if (strchr(".?!", ch) != NULL)
			possible_end = true;
	}

    printf("sentences: %lu\n", sentences);

	exit(EXIT_SUCCESS);
}
