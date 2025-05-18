/*
 *
 * Task:
 *		The following structures are designed to store information
 *		about objects on a graphics screen:
 *
 *		struct point { int x, y; };
 *		struct rectangle { struct point upper_left, lower_right; };
 *
 *		A point structure stores the x and y coordinates of a point
 *		on the screen. A rectangle structure stores the coordinates
 *		of the upper left and lower right corners of a rectangle.
 *		Write functions that perform the following operations on a
 *		rectangle structure r passed as an argument:
 *
 *		(a)	Compute the area of r.
 *		(b)	Compute the center of r, returning it as a point value.
 *			If either the x or y coordinate of the center isn't an
 *			integer, store its truncated value in the point structure.
 *		(c)	Move r by x units in the x direction and y units in the y
 *			direction, returning the modified version of r.
 *			(x and y are additional arguments to the function.)
 *		(d)	Determine whether a point p lies within r, returning
 *			true or false. (p is an additional argument of type
 *			struct point.)
 *
 * Date: 2025-05-18
 * Time: 12:47 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

int rec_area(struct rectangle r);
struct point rec_center(struct rectangle r);
struct rectangle rec_move(struct rectangle r, int x, int y);
bool p_belongs(struct point p, struct rectangle r);

int main(void) {
	struct rectangle r = {
		.upper_left.x = 3,
		.upper_left.y = 10,
		.lower_right.x = 11,
		.lower_right.y = 2
	};

	struct point p1 = {.x = 5, .y = 7};
	struct point p2 = {.x = 1, .y = 5};

	int move_x = 2;
	int move_y = 5;

	printf("area of r: %d\n", rec_area(r));
	
	printf("center point of r: (%d, %d)\n",
		   rec_center(r).x,
		   rec_center(r).y);
	
	printf("\nmove r %d in x axis and %d in y axis:\n",
		   move_x, move_y);
	printf("old position:\nupper_left(%d, %d)\nlower_right(%d, %d)\n",
		   r.upper_left.x, r.upper_left.y,
		   r.lower_right.x, r.lower_right.y);
	r = rec_move(r, move_x, move_y);
	printf("\nnew position:\nupper_left(%d, %d)\nlower_right(%d, %d)\n\n",
           r.upper_left.x, r.upper_left.y, r.lower_right.x,
           r.lower_right.y);
	
	printf("point p1 (%d, %d) inside r: %d\n", p1.x, p1.y, p_belongs(p1, r));
	printf("point p2 (%d, %d) inside r: %d\n", p2.x, p2.y, p_belongs(p2, r));
	
	exit(EXIT_SUCCESS);
}

int rec_area(struct rectangle r) {
        return (r.lower_right.x - r.upper_left.x + 1) *
			   (r.upper_left.y - r.lower_right.y + 1);
}

struct point rec_center(struct rectangle r) {
	struct point center;
	
	center.x = r.upper_left.x + ((r.lower_right.x - r.upper_left.x) / 2);
	center.y = r.lower_right.y + ((r.upper_left.y - r.lower_right.y) / 2);
	
	return center;
}

struct rectangle rec_move(struct rectangle r, int x, int y) {
	struct rectangle rec_moved;
	
	rec_moved.lower_right.x = r.lower_right.x + x;
	rec_moved.upper_left.x = r.upper_left.x + x;

	rec_moved.lower_right.y = r.lower_right.y + y;
	rec_moved.upper_left.y = r.upper_left.y + y;
	
	return rec_moved;
}

bool p_belongs(struct point p, struct rectangle r) {
	if (p.x >= r.upper_left.x && p.x <= r.lower_right.x &&
		p.y >= r.lower_right.y && p.y <= r.upper_left.y)
		return true;
	else
		return false;
}
