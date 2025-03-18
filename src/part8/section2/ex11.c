/*
 *
 * Task: Write a program fragment that declares an 8x8 char array named
 * checker_board and then uses a lopp to store the following data into the
 * array (one character per array element):
 *
 * B R B R B R B R 
 * R B R B R B R B 
 * B R B R B R B R 
 * R B R B R B R B 
 * B R B R B R B R 
 * R B R B R B R B 
 * B R B R B R B R 
 * R B R B R B R B 
 *
 * Hint: The element in row i, column j, should be the letter B if i + j is an
 * even number.
 *
 * Date: 2025-03-18
 * Time: 11:07 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char checker_board[8][8];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			checker_board[i][j] = (i + j) % 2 == 0 ? 'B' : 'R';
			putchar(' ');
			putchar(checker_board[i][j]);
		}
		putchar('\n');
	}

	exit(EXIT_SUCCESS);
}
