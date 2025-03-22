/*
 *
 * Project 9.
 *
 * Task: Write a program that generates a "random walk" across a 10x10 array.
 * The array will contain characters (all '.' initially). The program must
 * randomly "walk" from element to element, always going up, donw, left, or
 * right by one element. The elements visited by the program will be labeled
 * with the letters A through Z, in the order visited. Here's an example
 * of the desired output:
 *
 * A . . . . . . . . .
 * B C D . . . . . . .
 * . F E . . . . . . .
 * H G . . . . . . . .
 * I . . . . . . . . .
 * J . . . . . . . Z .
 * K . . R S T U V Y .
 * L M P Q . . . W X .
 * . N O . . . . . . .
 * . . . . . . . . . .
 *
 * Hint: Use the srand and rand functions (see deal.c) to generate random
 * numbers. After generating a number, look at its remainder when divided by 4.
 * There are four possible values for the remainder - 0, 1, 2, and 3 -
 * indicating the direction of the next move. Before performing a move, check
 * that (a) it won't go outside the array, and (b) it doesn't take us to an
 * element that already has a letter assigned. If either condition is violated,
 * try moving in another direction. If all four directions are blocked, the
 * program must terminate. Here's an example of premature termination:
 *
 * A B G H I . . . . .
 * . C F . J K . . . .
 * . D E . M L . . . .
 * . . . . N O . . . .
 * . . W X Y P Q . . .
 * . . V U T S R . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 * . . . . . . . . . .
 *
 * Y is blocked on all four sides, so there's no place to put Z.
 *
 * Date: 2025-03-21
 * Time: 06:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define FIELD_X	10
#define FIELD_Y	10

#define LEFT	-1
#define RIGHT	 1
#define UP		 1
#define DOWN	-1

#define OUT_OF_BOUND 	(x < 0 || x > FIELD_X || y < 0 || y > FIELD_Y)
#define NO_WAY			(input[y+1][x] != '.' &&
						input[y-1][x] != '.' &&
						input[y][x+1] != '.' &&
						input[y][x-1] != '.')

int main(void) {
	char playground[FIELD_Y][FIELD_X];
	bool can_move = true;
	char label = 'A';

	// init playground[][] with all '.'
	for (int i = 0; i < FIELD_Y; i++)
		for (int j = 0; j < FIELD_X; j++)
			playground[i][j] = '.';

	// Set starting position
	int x, y;
	x = y = 0;


	// Mark starting position
	playground[y][x] = label++;

	// Play the game
	srand((unsigned) time(NULL));
	while (can_move && label <= 'Z') {


		// Check left
		(
		// Check top
		// Check right
		// Check bottom


		switch (rand() % 4) {
			case 0:
				if (playground[y][x+LEFT] == '.' && (x + LEFT) > 0)
					x += LEFT;
				else continue;
				break;
			case 1:
				if (playground[y][x+RIGHT] == '.' && (x + RIGHT) < FIELD_X)
					x += RIGHT;
				else continue;
				break;
			case 2:
				if (playground[y+UP][x] == '.' && (y + UP) < FIELD_Y)
					y += UP;
				else continue;
				break;
			case 3:
				if (playground[y+DOWN][x] == '.' && (y + DOWN) > 0)
					y += DOWN;
				else continue;
				break;
			default:
				printf("Game over with result: %c!\n", label);
				exit(EXIT_FAILURE);
		}
		if (OUT_OF_BOUND) continue;
		playground[y][x] = label++;
	}

	// Print game results
	for (int i = 0; i < FIELD_Y; i++) {
		for (int j = 0; j < FIELD_Y; j++)
			printf("%c ", playground[i][j]);
		putchar('\n');
	}

	exit(EXIT_SUCCESS);
}
