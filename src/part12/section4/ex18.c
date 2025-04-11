/*
 *
 * Task: Write the evaluate_position function described in Exercise 13 of
 * Chapter 9. Use pointer arithmetic - not subscripting - to visit array
 * elements. Use a single loop instead of nested loops.
 *
 * Date: 2025-04-11
 * Time: 12:01 PM
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
	char *p = board[0];

	while (p < board[0] + (8*8)) {
		switch(toupper(*p)) {
			case 'Q':
				if (isupper(*p)) white += 9;
				else black += 9;
				break;
			case 'R':
				if (isupper(*p)) white += 5;
				else black += 5;
				break;
			case 'B':
				if (isupper(*p)) white += 3;
				else black += 3;
				break;
			case 'N':
				if (isupper(*p)) white += 3;
				else black += 3;
				break;
			case 'P':
				if (isupper(*p)) white += 1;
				else black += 1;
				break;
		}
		p++;
	}
	return white - black;
}
