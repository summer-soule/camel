/*
 *
 * Project 3.
 *
 * Task:
 *		(C99) Write a program that converts a complex number in polar
 *		coordinates to Cartesian form. After the user enters the values
 *		of r and theta, the program will display the number in the form
 *		a + bi, where
 *
 *		a = r cos theta
 *		b = r sin theta
 *
 * Date: 2026-05-04
 * Time: 01:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>

int main(void) {
	double r, theta;

	printf("Enter polar coordinates.\n");

	printf("r: ");
	scanf("%lf", &r);

	printf("theta: ");
	scanf("%lf", &theta);

	double x = r * cos(theta);
	double y = r * sin(theta);

	printf("%g %c %gi\n", x, (y >= 0) ? '+' : '-', fabs(y));

	exit(EXIT_SUCCESS);
}
