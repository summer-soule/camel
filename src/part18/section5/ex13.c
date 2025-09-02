/*
 *
 * Task:
 *		Which of the following declarations are legal?
 *		(Assume that PI is a macro that represents 3.14159.)
 *
 *		(a) char c = 65;
 *		(b) static int i = 5, j = i * i;
 *		(c) double d = 2 * PI;
 *		(d) double angles[] = {0, PI / 2, PI, 3 * PI / 2};
 *
 *		A: (b) 
 *
 * Date: 2025-09-02
 * Time: 03:44 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159

int main(void) {

	char c = 65;
    // static int i = 5, j = i * i;
    double d = 2 * PI;
	double angles[] = {0, PI / 2, PI, 3 * PI / 2};

    printf("char c: %d\n", c);
    printf("d = %f\n", d);
    for (int i = 0; i < 3; i++)
      printf("angles[%d] = %f\n", i, angles[i]);

	exit(EXIT_SUCCESS);
}
