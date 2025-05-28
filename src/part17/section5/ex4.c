/*
 *
 * Task:
 *		Suppose that the following declarations are in effect:
 *
 *		struct point { int x, y; };
 *		struct rectangle { struct point upper_left, lower_right; };
 *		struct rectangle *p;
 *
 *		Assume that we want p to point to a rectangle structure whose
 *		upper left corner is at (10, 25) and whose lower right corner
 *		is at (20, 15). Write a series of statements that allocate
 *		such a structure and initialize it as indicated.
 *
 * Date: 2025-05-28
 * Time: 02:58 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct point {
	int x, y;
};

struct rectangle {
	struct point upper_left, lower_right;
};

struct rectangle *p;

int main(void) {
	if ((p = malloc(sizeof(struct rectangle))) != NULL) {
		p->upper_left.x = 10;
		p->upper_left.y = 25;
		p->lower_right.x = 20;
		p->lower_right.y = 15;
	} else {
		printf("err: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	printf("upper_left: (%d, %d)\n", p->upper_left.x, p->upper_left.y);
	printf("lower_right: (%d, %d)\n", p->lower_right.x, p->lower_right.y);

	exit(EXIT_SUCCESS);
}
