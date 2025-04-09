/*
 *
 * Task: Write the following function:
 *
 *	void swap(int *p, int *q);
 *
 * When passed the addresses of two variables, swap should exchange the values
 * of the variables:
 *
 * 	swap(&i, &j);	// exchanges values of i and j
 *
 * Date: 2025-04-09
 * Time: 12:52 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void swap(int *p, int *q);

int main(void) {
	int a = 1, b = 2;

	printf("a: %d\nb: %d\n", a, b);

	swap(&a, &b);
	printf("\na: %d\nb: %d\n", a, b);

	exit(EXIT_SUCCESS);
}

void swap(int *p, int *q)
{
	int tmp = *q;
	*q = *p;
	*p = tmp;
}
