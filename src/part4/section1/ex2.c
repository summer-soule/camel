//-----------------------------------------------------------------------------
//
// Task: If i and j are positive integers, does (-i) / j always have the same
// value as -(i/j)? Justify your answer.
//
// A: Yes.
//
// Date: 2025-1-21
// Time: 17:07 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	i = 4, j = 2;
	printf("i = %d\nj = %d\n", i, j);
	printf("(-i) / j = %d\n", (-i) / j);
	printf("-(i/j) = %d\n\n", -(i/j));

	i = 4, j = -2;
	printf("i = %d\nj = %d\n", i, j);
	printf("(-i) / j = %d\n", (-i) / j);
	printf("-(i/j) = %d\n\n", -(i/j));

	i = -4, j = 2;
	printf("i = %d\nj = %d\n", i, j);
	printf("(-i) / j = %d\n", (-i) / j);
	printf("-(i/j) = %d\n\n", -(i/j));

	i = -4, j = -2;
	printf("i = %d\nj = %d\n", i, j);
	printf("(-i) / j = %d\n", (-i) / j);
	printf("-(i/j) = %d\n", -(i/j));

	exit(EXIT_SUCCESS);
}
