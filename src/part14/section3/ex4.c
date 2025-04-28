/*
 *
 * Task: For each of the following macros, give an example that illustrates
 * a problem with the macro and show how to fix it.
 *
 * 	(a) #define AVG(x,y) (x-y)/2
 * 	(b) #define AREA(x,y) (x)*(y)
 *
 *
 * A: 
 * (a) operands in replacement-list should be surrounded by additional
 * braces because invocation of (1+1,2+2) expands to (1+1-2+2)/2 which result
 * is 1 instead of -2. Fix here is to add braces.
 *
 * (b) here is also missed braces, but only for whole replacement-list.
 * For example, if we want to use macro like 2/AREA(5,5) so it will expand to
 * 25/5*5 which result is 25 instead of expected 1. Fix here is to add outer
 * braces like AREA(x,y) ((x)*(y))
 *
 * Date: 2025-04-27
 * Time: 10:27 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define AVG(x,y) (((x)-(y))/2)
#define AREA(x,y) ((x)*(y))

#define AVG_ORIG(x,y) (x-y)/2
#define AREA_ORIG(x,y) (x)*(y)

int main(void) {
	printf("(a) AVG(1+1,2+2) (((x)-(y))/2): %d\n", AVG(1+1,2+2));
	printf("(b) 25/AREA(5,5) ((x)*(y)): %d\n", 25/AREA(5,5));

	printf("(a) AVG_ORIG(1+1,2+2) (x-y)/2: %d\n", AVG_ORIG(1+1,2+2));
	printf("(b) 25/AREA_ORIG(5,5) (x)*(y): %d\n", 25/AREA_ORIG(5,5));

	exit(EXIT_SUCCESS);
}
