/*
 *
 * Project 1.
 *
 * Task:
 *		Write a program that finds the roots of the equation
 *		a*(x^2) + bx + c = 0 using the formula
 *
 *		x = (-b (+/-) sqrt((b^2) - 4 * a * c)) / (2 * a)
 *
 *		Have the program prompt for the values of a, b, and c,
 *		then print both values of x. (If b^2 - 4ac is negative,
 *		the program should instead print a message to the effect
 *		that the roots are complex.)
 *
 * Date: 2026-03-20
 * Time: 06:41 AM
 *
 */

#define _DEFAULT_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	int a, b, c;

	printf("Enter values of a, b and c.\n");

    printf("a: ");
	scanf("%d", &a);

	printf("b: ");
	scanf("%d", &b);

	printf("c: ");
	scanf("%d", &c);

	if ((b*b - 4 * a * c) < 0) {
		printf("roots are complex\n");
		exit(EXIT_SUCCESS);
	}

    printf("root 1: %f\n",
		   ((-b + sqrt((double) (b*b - 4 * a * c))) / (2 * a)));
	printf("root 2: %f\n",
		   ((-b - sqrt((double) (b*b - 4 * a * c))) / (2 * a)));

	exit(EXIT_SUCCESS);
}
