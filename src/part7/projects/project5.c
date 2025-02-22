/* 
 *
 * Project 5.
 *
 * Task: In the SCRABBLE Crossword Game, players form words using small tiles,
 * each containing a letter and a face value. The face value varies from one
 * letter to another, based on the letter's rarity. 
 *
 * Here are the face values:
 * 1: AEILNORSTU
 * 2: DG
 * 3: BCMP
 * 4: FHVWY
 * 5: K
 * 8: JX
 * 10: QZ
 *
 * Write a program that computes the value of a word by summing the values of
 * its letters:
 *
 * Enter a word: pitfall
 * Scrabble value: 12
 *
 * Your program should allow any mixture of lower-case and upper-case letters
 * on the word.
 *
 * Hint: Use the toupper library function.
 *
 * Date: 2025-02-22
 * Time: 0:56 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

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
