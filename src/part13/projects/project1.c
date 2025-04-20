/*
 *
 * Project 1.
 *
 * Task: Write a program that finds the "smallest" and "largest" in a series of
 * words. After the user enters the words, the program will determine which
 * words would come first and last if the words were listed in dictionary
 * order. The program must stop accepting input when the user enters a
 * four-letter word. Assume that no word is more than 20 letters long.
 * An interactive session with the program might look like this:
 *
 * 	Enter word: dog
 * 	Enter word: zebra
 * 	Enter word: rabbit
 * 	Enter word: catfish
 * 	Enter word: walrus
 * 	Enter word: cat
 * 	Enter word: fish
 *
 * 	Smallest word: cat
 * 	Largest word: zebra
 *
 * Hint: Use two strings named smallest_word and largest_word to keep track
 * of the "smallest" and "largest" words entered so far. Each time the user
 * enters a new word, use strcmp to compare it with smallest_word; if the new
 * word is "smaller", use strcpy to save it in smallest_word. Do a similar
 * comparison with largest_word. Use strlen to determine when the user has
 * entered a four-letter word.
 *
 * Date: 2025-04-19
 * Time: 04:10 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_L 20

void find_smallest(char *input, char *smallest_word);
void find_largest(char *input, char *largest_word);
void read_line(char [], int);

int main(void) {
	char smallest_word[ARR_L+1];
	char largest_word[ARR_L+1];
	char input[ARR_L+1];

	printf("Enter word: ");
	read_line(input, ARR_L);
	strcpy(smallest_word, strcpy(largest_word, input));

	while (strlen(input) != 4) {
		printf("Enter word: ");
		read_line(input, ARR_L);

		find_smallest(input, smallest_word);
		find_largest(input, largest_word);
	}


	printf("Smallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word);
	
	exit(EXIT_SUCCESS);
}

void read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
}

void find_smallest(char *input, char *smallest_word)
{
	if (strcmp(input, smallest_word) < 0) {
		strcpy(smallest_word, input);
	}
}

void find_largest(char *input, char *largest_word)
{
	if (strcmp(input, largest_word) > 0) {
		strcpy(largest_word, input);
	}
}
