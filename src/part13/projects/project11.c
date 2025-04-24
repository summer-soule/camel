/*
 *
 * Project 11.
 *
 * Task: Modify Programming Project 13 from Chapter 7 so that it includes the
 * following function:
 *
 * 	double compute_average_word_length(const char *sentence);
 *
 * The function returns the average length of the words in the string pointed
 * to by sentence.
 *
 * Date: 2025-04-24
 * Time: 03:52 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define SENT_L 80

double compute_average_word_length(const char *sentence);

int main(void) 
{
	char sent[SENT_L+1];

	printf("Enter a sentence: ");

	fgets(sent, SENT_L, stdin);
	
	printf("Average word length: %.1f\n", compute_average_word_length(sent));

	exit(EXIT_SUCCESS);
}

double compute_average_word_length(const char *sentence)
{
	const char *p = sentence;

	double sent_len = strlen(sentence);
	int words = 0;
	bool past_word = false;

	for (;;) {
		if (isblank(*p) && !past_word) {
			words++;
			sent_len--;
			past_word = true;
			p++;
		}
		else if (isblank(*p) && past_word) {
			sent_len--;
			p++;
		}
		else if (isalpha(*p)) {
			past_word = false;
			p++;
		}
		else if (*p == '\0' || *p == '\n') {
			if (*p == '\n')
				sent_len--;
			words++;
			break;
		}
	}

	return (double) (sent_len / words);
}
