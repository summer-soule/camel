/*
 *
 * Project 5.
 *
 * Task: Modify Programming Project 14 from Chapter 8 so that it uses a pointer
 * instead of an integer to keep track of the current position in the array
 * that contains the sentence.
 *
 * Date: 2025-04-11
 * Time: 05:42 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SENT_LEN	80

int main(void) {
	char sentence[SENT_LEN] = {0};
	char terminating = 0;
	char *sent_ptr;
	char *j;

	printf("Enter a sentence: ");

	// get sentence
	fgets(sentence, SENT_LEN, stdin);
	printf("\n%s\n", sentence);

	// store termination character
	for (sent_ptr = &sentence[strlen(sentence)-1];
			sent_ptr >= sentence;
			sent_ptr--)
	{
		if (*sent_ptr == '\n') {
			*sent_ptr = '\0';
			continue;
		}
		if (*sent_ptr == '!' ||
			*sent_ptr == '?' ||
			*sent_ptr == '.') {
				terminating = *sent_ptr;
				*sent_ptr = '\0';
				break;
		}
	}

	if (!terminating) {
		printf("No terminating character found.\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Reversal of sentence: ");

	sent_ptr = &sentence[strlen(sentence)-1];

	// search backward for the beginning of the last word
	while (sent_ptr >= sentence) {
		while (*sent_ptr != ' ' && sent_ptr >= sentence)
			sent_ptr--;
		j = sent_ptr+1;

		while (*j != ' ' && *j != '\0')
			putchar(*j++);
		if (sent_ptr > sentence) putchar(' ');
		*sent_ptr = '\0';
		if (sent_ptr >= sentence) {
			*sent_ptr = '\0';
			sent_ptr--;
		}
	}
	printf("%c\n", terminating);

	exit(EXIT_SUCCESS);
}
