/*
 *
 * Project 14.
 *
 * Task: Modify Programming Project 16 from Chapter 8 so that it includes the
 * following function:
 *
 * 	bool are_anagrams(const char *word1, const char *word2);
 *
 * The function returns true if the strings pointed to by word1 and word2 are
 * anagrams.
 *
 * Date: 2025-04-24
 * Time: 06:29 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

#define WORD_L 40

#define CHARS	26

bool are_anagrams(const char *word1, const char *word2);

int main(void) {
	char word1[WORD_L], word2[WORD_L];

	printf("Enter first word: ");
	scanf("%s", word1);
	
	printf("Enter second word: ");
	scanf("%s", word2);
	
	if (are_anagrams(word1, word2))
		printf("The words are anagrams.\n");
	else
		printf("The words are not anagrams.\n");

	exit(EXIT_SUCCESS);
}

bool are_anagrams(const char *word1, const char *word2)
{
	int seen[26] = {0};
	int *p = seen;

	while (*word1) {
		seen[toupper(*word1)-'A']++;
		word1++;
	}

	while (*word2) {
		seen[toupper(*word2)-'A']--;
		word2++;
	}

	while (*p)
		if (*p != 0)
			return false;
	return true;
}
