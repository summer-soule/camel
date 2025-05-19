/*
 *
 * Task:
 *		Suppose that the direction variable is declared in the
 *		following way:
 *
 *		enum {NORTH, SOUTH, EAST, WEST} direction;
 *
 *		Let x and y be int variables. Write a switch statement
 *		that tests the value of direction, incrementing x if
 *		direction is EAST, decrementing x if direction is WEST,
 *		incrementing y if direction is SOUTH, and decrementing
 *		y if direction is NORTH.
 *
 * Date: 2025-05-19
 * Time: 04:49 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

enum {NORTH, SOUTH, EAST, WEST} direction;

int main(void) {
	int x = 5;
	int y = 3;

	int dir = -1;

	printf("Enter direction (0 - N, 1 - S, 2 - E, 3 - W): ");
	scanf("%1d", &dir);

	if (dir < 0 || dir > 3) {
		printf("err: invalid direction\n");
		exit(EXIT_FAILURE);
	}
		
	switch (dir) {
		case NORTH:
			y--;
			break;
		case SOUTH:
			y++;
			break;
		case EAST:
			x++;
			break;
		case WEST:
			x--;
			break;
	}

	printf("New position: (%d, %d)\n", x, y);
	
	exit(EXIT_SUCCESS);
}
