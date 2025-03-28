/*
 *
 * Task: Write the following function, which evaluates a chess position:
 *
 * int evaluate_position(char board[8][8]);
 *
 * board represents a configuration of pieces on a chessboard, where the
 * letters K, Q, R, B, N, P represent White pieces, and the letters
 * k, q, r, b, n, and p represent Black pieces. evaluate_position should
 * sum the values of the White pieces (Q = 9, R = 5, B = 3, N = 3, P = 1).
 * It should also sum the values of the Black pieces (done in a similar way).
 * The function will return the difference between the two numbers. This value
 * will be positive if White has an advantage in material and negative if Black
 * has an advantage.
 *
 * Date: 2025-03-28
 * Time: 04:30 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int
evaluate_position(char [8][8]);

int main(void) {
	char board[8][8] = {
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
		{'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
		{'0', '0', '0', '0', '0', '0', '0', '0'},
		{'0', '0', '0', '0', '0', '0', '0', '0'},
		{'0', '0', '0', '0', '0', '0', '0', '0'},
		{'0', '0', '0', '0', '0', '0', '0', '0'},
		{'p', 'p', 'p', 'p', 'p', '0', 'p', 'p'},
		{'r', 'n', 'b', 'k', 'q', 'b', 'n', 'r'}
	};

	printf("Advantage: %d\n", evaluate_position(board));
		
	exit(EXIT_SUCCESS);
}

int
evaluate_position(char board[8][8])
{
	int white = 0, black = 0;
	for (int i = 0; i < 8; i++)
		for (int j = 0; j < 8; j++)
			switch(toupper(board[i][j])) {
				case 'Q':
					if (isupper(board[i][j])) white += 9;
					else black += 9;
					break;
				case 'R':
					if (isupper(board[i][j])) white += 5;
					else black += 5;
					break;
				case 'B':
					if (isupper(board[i][j])) white += 3;
					else black += 3;
					break;
				case 'N':
					if (isupper(board[i][j])) white += 3;
					else black += 3;
					break;
				case 'P':
					if (isupper(board[i][j])) white += 1;
					else black += 1;
					break;
			}
	return white - black;
}
