/*
 *
 * Project 6.
 *
 * Task: The prototypical Internet newbie is a fellow named BIFF, who has a
 * unique way of writing messages. Here's a typical BIFF communique:
 *
 * H3Y DUD3, C 15 R1LLY CO0L!!!!!!!!!!
 *
 * Write a "BIFF filter" that reads a message entered by the user and
 * translates it into BIFF-speak:
 *
 * Enter message: Hey dude, C is rilly cool
 * In B1FF-speak: H3Y DUD3, C 15 R1LLY CO0L!!!!!!!!!!
 *
 * Your program should convert the message to upper-case letters, substitute
 * digits for certain letters (A -> 4, B -> 8, E -> 3, I -> 1, O -> 0, S -> 5),
 * and then append 10 or so exclamation marks.
 *
 * Hint: Store the original message in an array of characters, then go back
 * through the array, translating and printing characters one by one.
 *
 * Date: 2025-03-21
 * Time: 12:12 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <time.h>

#define INPUT_MAX	50

int main(void) {
	int i, exclam;

	// Allocate memory and check
	char *input = malloc(INPUT_MAX);
	if (input == NULL) {
		printf("No memory\n");
		exit(EXIT_FAILURE);
	}

	// Ask for input
	printf("Enter message: ");
	fgets(input, INPUT_MAX, stdin);

	// Remove trailing newline, it here
	if ((strlen(input) > 0) && (input[strlen(input) - 1] == '\n'))
			input[strlen(input) - 1] = '\0';

	// Substitute characters
	for (int i = 0; i < INPUT_MAX; i++) {
		if (input[i] >= 97 && input[i] <= 122)
			input[i] = toupper(input[i]);
		switch (input[i]) {
			case 'A': input[i] = '4'; break;
			case 'B': input[i] = '8'; break;
			case 'E': input[i] = '3'; break;
			case 'I': input[i] = '1'; break;
			case 'O': input[i] = '0'; break;
			case 'S': input[i] = '5'; break;
		}
	}

	// Add exclamation marks
	srand(time(NULL));
	exclam = rand() % ((INPUT_MAX - strlen(input) + 1) + 1 - 1) + 1;

	for (i = strlen(input); exclam > 0; i++, exclam--) {
		input[i] = '!';
	}
	input[i] = '\0';

	// Print B1FF-speak conversion
	printf("In B1FF-speak: %s\n", input);

	exit(EXIT_SUCCESS);
}
