/*
 *
 * Task:
 *		(a) Write a "wrapper" function named try_math_fcn that calls
 *			a math function (assumed to have a double argument and return
 *			a double value) and then checks whether the call succeeded.
 *			Here's how we might use try_math_fcn:
 *
 *			y = try_math_fcn(sqrt, x, "Error in call of sqrt");
 *
 *			If the call of sqrt(x) is successful, try_math_fcn returns
 *			the value computed by sqrt. If the call fails, try_math_fcn
 *			calls perror to print the message Error in call of sqrt,
 *			then calls exit to terminate the program.
 *
 *		(b) Write a macro that has the same effect as try_math_fcn but
 *			builds the error message from the function's name:
 *
 *			y = TRY_MATH_FCN(sqrt, x);
 *
 *			If the call of sqrt fails, the message will be Error in call
 *			of sqrt.
 *
 *			Hint: Have TRY_MATH_FCN call try_math_fcn.
 *
 * Date: 2026-04-04
 * Time: 04:25 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>

double try_math_fcn(double (*)(double), double, const char *);

#define TRY_MATH_FCN(fn, x) \
try_math_fcn(fn, (x), "Error in call of " #fn);


int main(void) {
	double y = 0.0f;
	double x = 64.0f;

//	y = try_math_fcn(sqrt, x, "Error in call of sqrt");
	y = TRY_MATH_FCN(sqrt, x);

	printf("sqrt(%f): %f\n", x, y);

	exit(EXIT_SUCCESS);
}

double try_math_fcn(double (*fn)(double), double x, const char *errstr) {
	double value = 0.0f;

	errno = 0;
	value = fn(x);

	if (errno) {
		perror(errstr);
		exit(EXIT_FAILURE);
	}

	return value;
}
