/*
 *
 * Project 9.
 *
 * Task: Modify Programming Project 10 from Chapter 7 so that it includes
 * the following function:
 *
 * 	int compute_vowel_count(const char *sentence);
 *
 * The function returns the number of vowels in the string pointed to by the
 * sentence parameter.
 *
 * Date: 2025-04-24
 * Time: 02:23 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SEN_L 80

int compute_vowel_count(const char *sentence);

int main(void) 
{
	char sentence[SEN_L+1];

	printf("Enter a sentence: ");

	fgets(sentence, SEN_L, stdin);

	printf("Your sentence contains %d vowels.\n", compute_vowel_count(sentence));

	exit(EXIT_SUCCESS);
}

int compute_vowel_count(const char *sentence)
{
	int vowels = 0;

	while(*sentence) {
		switch(toupper(*sentence)) {
			case 'A': case 'E': case 'I': case 'O': case 'U':
				vowels++;
				break;
			default:
				break;
		}
		sentence++;
	}
	return vowels;
}
