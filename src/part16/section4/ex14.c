/*
 *
 * Task:
 *		Let shape be the structure tag declared in Exercise 13. Write
 *		functions that perform the following operations on a shape
 *		structure s passed as an argument:
 *
 *		(a)	Compute the area of s.
 *		(b)	Move s by x units in the x direction and y units in the y
 *			direction, returning the modified version of s.
 *			(x and y are additional arguments to the functoin.)
 *		(c)	Scale s by a factor of c (a double value), returning the
 *			modified version of s. (c is an additional argument
 *			to the function.)
 *
 * Date: 2025-05-18
 * Time: 06:10 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define RECTANGLE 0
#define CIRCLE 1

#define PI 3.14159

struct point {
	int x, y;
};

struct shape {
	int shape_kind;
	struct point center;
	union {
		struct {
			int height, width;
		} rectangle;
		struct {
			int radius;
		} circle;
	} u;
};

double shape_area(struct shape s);
struct shape shape_move(struct shape s, int x, int y);
struct shape shape_scale(struct shape s, double c);

int main(void) {
	struct shape s_rectangle = {
		.shape_kind = RECTANGLE,
		.center = {5, 5},
		.u.rectangle = {7, 5}
	};

    struct shape s_circle = {
        .shape_kind = CIRCLE,
        .center = {.x = 7, .y = 7},
        .u.circle.radius = 5
	};          

	printf("Area of s_rectangle: %f\n", shape_area(s_rectangle));
	printf("Area of s_circle: %f\n", shape_area(s_circle));
	
	printf("Pos of s_rectangle: (%d, %d)\n",
		   s_rectangle.center.x,
		   s_rectangle.center.y);
	s_rectangle = shape_move(s_rectangle, 3, 5);
	printf("Pos of s_rectangle: (%d, %d)\n",
		   s_rectangle.center.x,
		   s_rectangle.center.y);

	printf("dimensions of s_rectangle: w(%d) h(%d)\n",
		   s_rectangle.u.rectangle.width,
		   s_rectangle.u.rectangle.height);
	s_rectangle = shape_scale(s_rectangle, 1.5);
	printf("dimensions of scaled s_rectangle by 1.5: w(%d) h(%d)\n",
		   s_rectangle.u.rectangle.width,
		   s_rectangle.u.rectangle.height);

	printf("radius of s_circle: %d\n",
		   s_circle.u.circle.radius);
	s_circle = shape_scale(s_circle, 1.5);
	printf("radius of scaled s_circle by 1.5: %d\n",
		   s_circle.u.circle.radius);
	
	exit(EXIT_SUCCESS);
}

double shape_area(struct shape s) {
	if (s.shape_kind == RECTANGLE)
		return s.u.rectangle.width * s.u.rectangle.height;
	else
		return s.u.circle.radius * s.u.circle.radius * PI;
}

struct shape shape_move(struct shape s, int x, int y) {
	struct shape shape_moved;
	shape_moved.center.x = s.center.x + x;
	shape_moved.center.y = s.center.y + y;
	return shape_moved;
}

struct shape shape_scale(struct shape s, double c) {
	if (s.shape_kind == RECTANGLE) {
		s.u.rectangle.height *= c;
		s.u.rectangle.width *= c;
	} else
		s.u.circle.radius = s.u.circle.radius * c;
	return s;
}
