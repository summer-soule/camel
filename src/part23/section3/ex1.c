/*
 *
 * Task:
 *		Extend the round_nearest function so that it rounds
 *		a floating-point number x to n digits after the
 *		decimal point. For example, the call round_nearest(3.14159, 3)
 *		would return 3.142.
 *
 *		Hint: Multiply x by 10^n, round to the nearest integer, then
 *		divide by 10^n. Be sure that your function works correctly
 *		for both positive and negative values of x.
 *
 * Date: 2026-02-28
 * Time: 04:55 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double round_nearest(double x, int rounding);

#define NUMBER1 3.14159
#define PRECISION1 3

#define NUMBER2 -3.14159
#define PRECISION2 3

int main(void) {

	printf("round_nearest(%f, 3): %.*f\n",
		   NUMBER1,
           PRECISION1,
           round_nearest(NUMBER1, PRECISION1));

	printf("round_nearest(%f, 3): %.*f\n",
		   NUMBER2,
           PRECISION2,
           round_nearest(NUMBER2, PRECISION2));

	exit(EXIT_SUCCESS);
}

double round_nearest(double x, int rounding) {
	double tmp = x * pow(10, rounding);
    return (tmp < 0.0 ? -1 * ceil(tmp - 0.5) : floor(tmp + 0.5))
           / pow(10, rounding);
}
