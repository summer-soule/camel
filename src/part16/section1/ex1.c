/*
 *
 * Task:
 *		In the following declarations, the x and y structures
 *		have members named x and y:
 *
 *		struct { int x, y; } x;
 *		struct { int x, y; } y;
 *
 *		Are these declarations legal on an individual basis?
 *		Could both declarations appear as shown in a program?
 *		Justify your answer.
 *
 * Answer:
 *		These declarations are legal as individual and together.
 *		Following code proves it by assigning and printing
 *		their values.
 *
 * Date: 2025-05-15
 * Time: 10:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct {
	int x, y;
} x;

struct {
	int x, y;
} y;

int main(void) {
	x.x = 5;
	x.y = 10;
	y.x = 3;
	y.y = 7;

	printf("x.x: %d\nx.y: %d\n\n", x.x, x.y);
	printf("y.x: %d\ny.y: %d\n\n", y.x, y.y);
	
	exit(EXIT_SUCCESS);
}
