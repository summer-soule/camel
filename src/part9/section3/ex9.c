/*
 *
 * Task: What will be the output of the following program?
 *
 * A: i = 1, j = 2
 * swap() did nothing because operate with local variables
 *
 * Date: 2025-03-28
 * Time: 03:34 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void) {
	int i = 1, j = 2;

	swap(i, j);
	printf("i = %d, j = %d\n", i, j);
	exit(EXIT_SUCCESS);
}

void swap (int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}
