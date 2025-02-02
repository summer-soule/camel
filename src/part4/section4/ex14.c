/*
*
* Task: Supply parentheses to show how a C compiler would interpret each of the
* following expressions.
*
* (a) a * b - c * d + e
* (((a * b) - (c * d)) + e)
*
* (b) a / b % c / d
* (((a / b) % c) / d)
*
* (c) - a - b + c - + d
* ((((- a) - b) + c) - (+ d))
*
* (d) a * - b / c - d
* (((a * (- b)) / c) - d)
*
* Date: 2025-2-02
* Time: 06:01 AM
*
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Task: Supply parentheses to show how a C compiler would interpret \
each of the following expressions.\n\n");

	printf("(a) a * b - c * d + e\n");
	printf("(((a * b) - (c * d)) + e)\n\n");
	
	printf("(b) a / b %% c / d\n");
	printf("(((a / b) %% c) / d)\n\n");
	
	printf("(c) - a - b + c - + d\n");
	printf("((((- a) - b) + c) - (+ d))\n\n");
	
	printf("(d) a * - b / c - d\n");
	printf("(((a * (- b)) / c) - d)\n\n");

	exit(EXIT_SUCCESS);
}
