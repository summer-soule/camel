/*
 *
 * Project 14.
 *
 * Task: Write a program that reverses the words in a sentence:
 *
 * Enter a sentence: you can cage a swallow can't you?
 * Reversal of sentence: you can't swallow a cage can you?
 *
 * Hint: Use a loop to read the characters one by one and store them in a
 * one-dimensional char array. Have the loop stop at a period, question mark,
 * or exclamation point (the "terminating character"), which is saved in a
 * saved in a separate char variable. Then use a second loop to search
 * backward through the array for the beginning of the last word. Print the
 * last word, then search backward for the next-to-last word. Repeat until
 * the beginning of the array is reached. Finally, print the terminating
 * character.
 *
 * Date: 2025-03-25
 * Time: 02:01 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SENT_LEN	80

int main(void) {
	char sentence[SENT_LEN] = {0};
	char terminating;
	int i, j;

	printf("Enter a sentence: ");

	// get sentence
	fgets(sentence, SENT_LEN, stdin);
	printf("\n%s\n", sentence);

	// store termination character
	for (i = strlen(sentence)-1; i >= 0; i--) {
		if (sentence[i] == '\n') {
			sentence[i] = '\0';
			continue;
		}
		if (sentence[i] == '!' ||
			sentence[i] == '?' ||
			sentence[i] == '.') {
				terminating = sentence[i];
				sentence[i] = '\0';
				break;
		}
	}

	if (i < 0) {
		printf("No terminating character found.\n");
		exit(EXIT_FAILURE);
	}
	
	printf("Reversal of sentence: ");

	i = strlen(sentence) - 1;

	// search backward for the beginning of the last word
	while (i >= 0) {
		while (sentence[i] != ' ' && i >= 0)
			i--;
		j = i + 1;

		while (sentence[j] != ' ' && sentence[j] != '\0')
			putchar(sentence[j++]);
		if (i > 0) putchar(' ');
		sentence[i] = '\0';
		if (i >= 0) {
				sentence[i] = '\0';
				i--;
		}
	}
	printf("%c\n", terminating);

	exit(EXIT_SUCCESS);
}
