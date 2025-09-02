/*
 *
 * Project 5.
 *
 * Task:
 *		Write a program that sorts a series of words entered by the user:
 *
 *		Enter word: foo
 *		Enter word: bar
 *		Enter word: baz
 *		Enter word: quux
 *		Enter word:
 *
 *		In sorted order: bar baz foo quux
 *
 *		Assume that each word is no more than 20 characters long.
 *		Stop reading when the user enters an empty word (i.e., presses
 *		Enter without entering a word). Store each word in a dynamically
 *		allocated string, using an array of pointers to keep track of the
 *		strings, as in the remind2.c program (Section 17.2). After all
 *		words have been read, sort the array (using any sorting technique)
 *		and then use a loop to print the words in sorted order.
 *
 *		Hint: Use the read_line function to read each word, as in remind2.c.
 *
 * Date: 2025-07-02
 * Time: 10:58 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define WORD_LEN 20

int main(void) {
	char **words = NULL;
	char *p = NULL;

//	words = realloc(words, sizeof());

	for (int i = 0; ; i++) {
        if ((p = malloc(sizeof(char)))) {
			printf("err: malloc failed\n");
			exit(EXIT_FAILURE);
		}
	}

	exit(EXIT_SUCCESS);
}
