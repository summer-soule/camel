/*
 *
 * Project 3.
 *
 * Task: Modify Programming Project 9 from Chapter 8 so that it includes the
 * following functions:
 *
 * void generate_random_walk(char walk[10][10]);
 * void print_array(char walk[10][10]);
 *
 * main first calls generate_random_walk, which initializes the array to
 * contain '.' characters and then replaces some of these characters by the
 * letters A through Z, as described in the original project. main then calls
 * print_array to display the array on the screen.
 *
 * Date: 2025-03-31
 * Time: 12:45 AM
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
#define NO_WAY			(input[y+1][x] != '.' &&\
						input[y-1][x] != '.' &&\
						input[y][x+1] != '.' &&\
						input[y][x-1] != '.')

void generate_random_walk(char walk[FIELD_Y][FIELD_X]);
void print_array(char walk[FIELD_Y][FIELD_X]);

int main(void) {
	char playground[FIELD_Y][FIELD_X];

	generate_random_walk(playground);
	print_array(playground);

	exit(EXIT_SUCCESS);
}

void
generate_random_walk(char walk[FIELD_Y][FIELD_X])
{
	char label = 'A';

	// init walk[][] with all '.'
	for (int i = 0; i < FIELD_Y; i++)
		for (int j = 0; j < FIELD_X; j++)
			walk[i][j] = '.';

	// Set starting position
	int x, y;
	x = y = 0;

	// count of move generating cycles
	int cycle = 0;

	// Mark starting position
	walk[y][x] = label++;

	srand((unsigned) time(NULL));
	printf("processing...\n");

	// Play the game
	while (label <= 'Z') {


		// Show move generating cycle
		putchar('.');
		cycle++;

		// Checking the ability to move
		if ((x + LEFT) >= 0 && walk[y][x+LEFT] != '.' &&
			(x + RIGHT) < FIELD_X && walk[y][x+RIGHT] != '.' &&
			(y + UP) >= 0 && walk[y+UP][x] != '.' &&
			(y + DOWN) < FIELD_Y && walk[y+DOWN][x] != '.') {
			printf("\nDead end reached! Game over!\n");
			printf("Moves processed: %d\n", cycle);
			break;
		}

		// Make a move
		switch (rand() % 4) {
			case 0:
				if ((x + LEFT) >= 0 && walk[y][x+LEFT] == '.')
					x += LEFT;
				else continue;
				break;
			case 1:
				if ((x + RIGHT) < FIELD_X && walk[y][x+RIGHT] == '.')
					x += RIGHT;
				else continue;
				break;
			case 2:
				if ((y + UP) >= 0 && walk[y+UP][x] == '.')
					y += UP;
				else continue;
				break;
			case 3:
				if ((y + DOWN) < FIELD_Y && walk[y+DOWN][x] == '.')
					y += DOWN;
				else continue;
				break;
			default:
				printf("Game over with result: %c!\n", label);
				exit(EXIT_FAILURE);
		}
		walk[y][x] = label++;
	}

	putchar('\n');
	printf("Moves processed: %d\n", cycle);
}

void
print_array(char walk[10][10])
{
	// Print game results
	for (int i = 0; i < FIELD_Y; i++) {
		for (int j = 0; j < FIELD_Y; j++)
			printf("%c ", walk[i][j]);
		putchar('\n');
	}
}
