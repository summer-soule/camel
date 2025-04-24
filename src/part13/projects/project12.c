/*
 *
 * Project 12.
 *
 * Task: Modify Programming Project 14 from Chapter 8 so that it stores the
 * words in a two-dimensional char array as it reads the sentence, with each
 * row of the array storing a single word. Assume that the sentence contains
 * no more than 30 words and no word is more than 20 characters long. Be sure
 * to store a null character at the end of each word so that it can be treated
 * as a string.
 *
 * Date: 2025-04-24
 * Time: 03:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SENT_LEN	20
#define SENT_WRD	30

int main(void) {
	char sentence[SENT_WRD][SENT_LEN];
	char terminating;
	int i, j;
	char ch;

	printf("Enter a sentence: ");

	i = j = 0;
	while ((ch = getchar()) != '\n' && i < SENT_WRD) {
		if (ch == ' ' || ch == '\t') {
			sentence[i][j] = '\0';
			i++;
			j = 0;
			continue;
		}
		else if (ch == '.' || ch == '?' || ch == '!') {
			terminating = ch;
			sentence[i][j] = '\0';
			break;
		}
		else if (j < SENT_LEN)
			sentence[i][j++] = ch;
	}

	printf("Reversal of sentence: ");

	while (i > 0)
		printf("%s ", sentence[i--]);
	printf("%s%c\n", sentence[i], terminating);

	exit(EXIT_SUCCESS);
}
