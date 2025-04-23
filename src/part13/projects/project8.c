/*
 *
 * Project 8.
 *
 * Task: Modify Programming Project 5 from Chapter 7 so that it includes the
 * following function:
 *
 * 	int compute_scrabble_value(const char *word);
 *
 * The function returns the SCRABBLE value of the string pointed to by word.
 *
 * Date: 2025-04-24
 * Time: 12:36 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int compute_scrabble_value(const char *word);

int main(void)
{
	char ch;
	int scrabble;

	scrabble = 0;

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n') {
		switch(toupper(ch)) {
			case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': 
			case 'R': case 'S': case 'T': case 'U':
				scrabble += 1;
				break;
			case 'D': case 'G':
				scrabble += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				scrabble += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				scrabble += 4;
				break;
			case 'K':
				scrabble += 5;
				break;
			case 'J': case 'X':
				scrabble += 8;
				break;
			case 'Q': case 'Z':
				scrabble += 10;
				break;
		}
	}

	printf("Scrabble value: %d\n", scrabble);

	exit(EXIT_SUCCESS);
}

int compute_scrabble_value(const char *word)
{
	int scrabble = 0;
	int score[] = {
		['A'] = 1, ['B'] = 3, ['C'] = 3, ['D'] = 2, ['E'] = 1,
		['F'] = 4, ['G'] = 2, ['H'] = 4, ['I'] = 1, ['J'] = 8,
		['K'] = 5, ['L'] = 1, ['M'] = 3, ['N'] = 1, ['O'] = 1,
		['P'] = 3, ['Q'] = 10, ['R'] = 1, ['S'] = 1, ['T'] = 1,
		['U'] = 1, ['V'] = 4, ['W'] = 4, ['X'] = 8, ['Y'] = 4, ['Z'] = 10};

	while (*word)
		scrabble += (score[*word++]);

	return scrabble;
}
