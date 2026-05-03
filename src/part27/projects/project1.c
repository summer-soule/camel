/*
 *
 * Project 1.
 *
 * Task:
 *		(C99) Make the following modifications to the quadratic.c program
 *		of Section 27.4:
 *
 *		(a) Have the user enter the coefficients of the polynomial (the values
 *		of the variables a, b, and c).
 *
 *		(b) Have the program test the discriminant before displaying the values
 *		of the roots. If the discriminant is negative, have the program
 *		display the roots in the same way as before. If it's nonnegative,
 *		have the program display the roots as real numbers (without an imaginary
 *		part). For example, if the quadratic equation is x^2 + x - 2 = 0,
 *		the output of the program would be
 *
 *		root1 = 1
 *		root2 = -2
 *
 *		(c) Modify the program so that it displays a complex number with
 *		a negative imaginary part as a - bi instead of a + -bi. For example,
 *		the output of the program with the original coefficients would be
 *
 *		root1 = -0.2 + 0.4i
 *		root2 = -0.2 - 0.4i
 *
 * Date: 2026-05-03
 * Time: 12:56 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <complex.h>

int main(void) {
	double a, b, c;

	printf("Enter a, b, and c values: ");
	scanf("%lf%lf%lf", &a, &b, &c);

	double complex discriminant_sqrt = csqrt(b * b - 4 * a * c);
	double complex root1 = (-b + discriminant_sqrt) / (2 * a);
	double complex root2 = (-b - discriminant_sqrt) / (2 * a);

	if (cimag(root1) == 0)
		printf("root1 = %g\n", creal(root1));
	else
		printf("root1 = %g %c %gi\n", creal(root1),
			   cimag(root1) < 0 ? '-' : '+', fabs(cimag(root1)));

	if (cimag(root1) == 0)
		printf("root2 = %g\n", creal(root2));
	else
		printf("root2 = %g %c %gi\n", creal(root2),
			   cimag(root2) < 0 ? '-' : '+', fabs(cimag(root2)));

	exit(EXIT_SUCCESS);
}
