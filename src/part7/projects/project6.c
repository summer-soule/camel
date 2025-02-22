/* 
 *
 * Project 6.
 *
 * Task: Write a program that prints the values of sizeof(int), sizeof(short),
 * sizeof(long), sizeof(float), sizeof(double) and sizeof(long double).
 *
 * Date: 2025-02-22
 * Time: 3:50 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a = 1;
	short b = 2;
	long c = 3;
	float d = 4;
	double e = 5;
	long double f = 6;

	printf("sizeof(a) = %lu\n", sizeof(a));
	printf("sizeof(b) = %lu\n", sizeof(b));
	printf("sizeof(c) = %lu\n", sizeof(c));
	printf("sizeof(d) = %lu\n", sizeof(d));
	printf("sizeof(e) = %lu\n", sizeof(e));
	printf("sizeof(f) = %lu\n", sizeof(f));

	exit(EXIT_SUCCESS);
}
