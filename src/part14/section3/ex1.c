/*
 *
 * Task: Write parameterized macros that compute the following values.
 *
 * 	(a) The cube of x.
 * 	(b) The remainder when n is divided by 4.
 * 	(c) 1 if the product of x and y is less than 100, 0 otherwise.
 *
 * Do your macros always work? If not, describe what arguments would make
 * them fail.
 *
 * A: doesn't work with string literal
 *
 * Date: 2025-04-27
 * Time: 05:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define CUBE(x) ((x)*(x)*(x))
#define REMAINDER(n) ((n)%4)
#define PROD_TEST100(x,y) ((((x)*(y))<100)?1:0)

int main(void) {

	printf("CUBE(%d): %d\n", 5, CUBE(5));
	printf("REMAINDER(%d): %d\n", 5, REMAINDER(5));
	printf("PROD_TEST100(%d, %d): %d\n", 10, 9, PROD_TEST100(10, 9));
	printf("PROD_TEST100(%d, %d): %d\n", 10, 10, PROD_TEST100(10, 10));

	exit(EXIT_SUCCESS);
}
