/* 
 *
 * Project 14.
 *
 * Task: Write a program that uses Newton's method to compute the sqeare root
 * of a positive floating-point number:
 *
 * Enter a positive number: 3
 * Square root: 1.73205
 *
 * Let x be the number entered by the user. Newton's method requires an initial
 * guess y for the square root of x (we'll use y = 1). Successive guesses are
 * found by computing the average of y and x/y. The following table shows how
 * the square root of 3 would be found:
 *
 *	 x		y			x/y			avg
 *	 								y and x/y
 *	 ________________________________________
 *	 3		1			3		 	2
 *	 3		2			1.5		 	1.75
 *	 3		1.75		1.71429 	1.73214
 *	 3		1.73214		1.73296 	1.73205
 *	 3		1.73205		1.73205 	1.73205
 *
 * Note that the values of y get progressively closer to the true square root
 * of x. For greater accuracy, your program should use variables of type double
 * rather than float. Have the program terminate when the absolute value of the
 * difference between the old value of y and the new value of y is less than
 * the product of .00001 and y.
 *
 * Hint: Call the fabs function to find the absolute value of a double.
 * (You'll need to include <math.h> header at the beginning of your program
 * in order to use fabs.)
 *
 * Date: 2025-02-27
 * Time: 01:13 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define EPS 1E-5

int main(void) 
{
	double x = 0.0f;
	double y = 1.0f;
	double nx;

	printf("Enter a positive number: ");
	scanf("%lf", &x);

	for (;;) {
		nx = (y + x / y) / 2;
		if(fabs(y - nx) < EPS) break;
		y = nx;
	}

	printf("Square root: %.5lf\n", y);

	exit(EXIT_SUCCESS);
}
