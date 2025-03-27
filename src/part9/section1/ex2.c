/*
 *
 * Task: Write a function check(x, y, n) that returns 1 if both x and y fall
 * between 0 and n - 1 inclusive. The function should return 0 otherwise.
 * Assume that x, y, and n are all of type int.
 *
 * Date: 2025-03-27
 * Time: 11:58 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int check(int, int, int);

int main(void) {
	int x, y, n;

	printf("Enter x, y and n values: ");
	scanf("%d %d %d", &x, &y, &n);

	if (check(x, y, n))
		printf("x and y values are between 0 and n - 1.\n");
	else
		printf("x and y values are not between 0 and n - 1.\n");

	exit(EXIT_SUCCESS);
}

int check (int x, int y, int n)
{
	if (x > 0 && x < n - 1 && y > 0 && y < n - 1)
		return 1;
	else
		return 0;
}
