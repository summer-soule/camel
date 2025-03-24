/*
 *
 * Project 12.
 *
 * Task: Modify Programming Project 5 from Chapter 7 so that the SCRABBLE
 * values of the letters are stored in an array. The array will have 26
 * elements, corresponding to the 26 letters of the alphabet. For example,
 * element 0 of the array will store 3 (because the SCRABBLE value of the
 * letter A is 1), element 1 of the array will store 3 (because the SCRABBLE
 * value of the letter B is 3), and so forth. As each character of the input
 * word is read, the program will use the array to determine the SCRABBLE value
 * of that character. Use an array initializer to set up the array.
 *
 * Date: 2025-03-23
 * Time: 08:34 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void)
{
	char ch;
	char scrabble[26] = {
		[0] = 1, [4] = 1, [8] = 1, [11] = 1, [13] = 1,
		[14] = 1, [17] = 1, [18] = 1, [19] = 1, [20] = 1,

		[3] = 2, [6] = 2,

		[1] = 3, [2] = 3,
		[12] = 3, [15] = 3,

		[5] = 4, [7] = 4, [21] = 4,
		[22] = 4, [24] = 4,

		[10] = 5,

		[9] = 8, [23] = 8,

		[16] = 10, [25] = 10
	};
	int score = 0;

	printf("Enter a word: ");

	while ((ch = getchar()) != '\n') {
		if (toupper(ch) < 'A' || toupper(ch) > 'Z') {
			printf("err: invalid character %c\n", ch);
			exit(EXIT_FAILURE);
		}
		score += scrabble[toupper(ch)-'A'];
	}

	printf("Scrabble value: %d\n", score);

	exit(EXIT_SUCCESS);
}
