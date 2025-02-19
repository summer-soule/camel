/* 
 *
 * Task: Assume that a program contains the following declarations:
 *
 * char c = '\1';
 * short s = 2;
 * int i = -3;
 * long m = 5;
 * float f = 6.5f;
 * double d = 7.5;
 *
 * Give the value and the type of teach expression listed below.
 *
 * (a) c * i
 * (b) s + m
 * (c) f / c
 * (d) d / s
 * (e) f - d
 * (f) (int) f
 *
 * Date: 2025-02-19
 * Time: 12:29 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c = '\1';
	short s = 2;
	int i = -3;
	long m = 5;
	float f = 6.5f;
	double d = 7.5;

	printf("(char) c * i = %c\n", c * i);
	printf("(long int) s + m = %ld\n", s + m);
	printf("(float) f / c = %f\n", f / c);
	printf("(double) d / s = %f\n", d / s);
	printf("(double) f - d = %f\n", f - d);
	printf("(int) (int) f = %d\n", (int) f);

	exit(EXIT_SUCCESS);
}
