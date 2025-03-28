/*
 *
 * Task: Condense the fact function in the same way we condensed power.
 *
 * Date: 2025-03-28
 * Time: 06:17 AM
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
	return (n <= 1) ? 1 : n * fact(n - 1);
}
