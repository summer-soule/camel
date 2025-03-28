/*
 *
 * Task: Rewrite the fact function so that it's no longer recursive.
 *
 * Date: 2025-03-28
 * Time: 06:23 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int fact(int);

int main(void) {

	printf("fact(5): %d\n", fact(5));

	exit(EXIT_SUCCESS);
}

int fact(int n)
{
	int factorial = n;
	while (--n >= 1)
		factorial *= n;

	return factorial;
}
