/*
 *
 * Project 4.
 *
 * Task: Modify Programming Project 16 from Chapter 8 so that it includes the
 * following functions:
 *
 * void read_word(int counts[26]);
 * bool equal_array(int counts1[26], int counts2[26]);
 *
 * main will call read_word twice, once for each of the two words entered by
 * the user. As it reads a word, read_word will use the letters in the word
 * to update the counts array, as described in the original project. (main will
 * declare two arrays, one for each word. These arrays are used to track how
 * many times each letter occurs in the words.) main will then call
 * equal_array, passing it the two arrays, equal_array will return true if the
 * elements in the two arrays are identical (indicating that the words are
 * anagrams) and false otherwise.
 *
 * Date: 2025-03-31
 * Time: 01:26 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define CHARS	26

void
read_word(int counts[26]);

bool
equal_array(
		int counts1[26],
		int counts2[26]);

int main(void) {
	int word_1[CHARS] = {0};
	int word_2[CHARS] = {0};

	printf("Enter first word: ");
	read_word(word_1);

	printf("Enter second word: ");
	read_word(word_2);
	
	equal_array(word_1, word_2)
		? printf("The words are anagrams.\n")
		: printf("The words are not anagrams.\n");

	exit(EXIT_SUCCESS);
}

void
read_word(int counts[CHARS])
{
	char ch;

	// increment chars from first word in seen array
	while ((ch = getchar()) != '\n') {
		if (isalpha(ch))
			counts[tolower(ch)-'a']++;
		else {
			printf("\nerr: invalid character %c\n", ch);
			exit(EXIT_FAILURE);
		}
	}
}

bool
equal_array(int counts1[CHARS], int counts2[CHARS])
{
	// check for all zeroes
	for (int i = 0; i < CHARS; i++) {
		if (counts1[i] != counts2[i]) {
			return false;
		}
	}
	return true;
}
