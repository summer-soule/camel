/*
 *
 * Project 2.
 *
 * Task:
 *		(C99) Write a program that converts a complex number in Cartesian
 *		coordinates to polar form. The user will enter a and b (the real
 *		and imaginary parts of the number); the program will display
 *		the values of r and θ.
 *
 * Date: 2026-05-03
 * Time: 01:50 PM
 *
 */


#include <stdio.h>
#include <stdlib.h>

#include <math.h>
#include <complex.h>

#define M_PI 3.14159265358979323846
#define M_PI_2 1.57079632679489661923

enum Q {
	Q0 = 0,
	Q1 = 1,
	Q2 = 2,
	Q3 = 3,
	Q4 = 4,
};

typedef struct {
	double r, theta;
	enum Q quad;
} coords_polar;

typedef struct {
	double x, y;
} coords_cart;

// there is no need for non-complex solution, but I did it for testing
coords_polar cart2polar(coords_cart);		// non-complex func
coords_polar cart2polar_c(coords_cart);		// complex func

int main(void) {
	coords_cart input;
	coords_polar output, output_c;

	printf("Enter real and imaginary parts of the number.\n");

	printf("real: ");
	scanf("%lf", &input.x);

	printf("imaginary: ");
	scanf("%lf", &input.y);

	output = cart2polar(input);
	output_c = cart2polar_c(input);
	printf("cart2polar: [Q] %d [r] %g [theta] %g\n", output.quad, output.r, output.theta);
	printf("cart2polar_c: [Q] %d [r] %g [theta] %g\n", output_c.quad, output_c.r, output_c.theta);

	exit(EXIT_SUCCESS);
}

coords_polar cart2polar(coords_cart c) {
	coords_polar result;
	result.r = sqrt(c.x * c.x + c.y * c.y);

	result.quad = (c.x > 0) ? ((c.y >= 0) ? Q1 : Q4) :
				  (c.x < 0) ? ((c.y > 0) ? Q2 : Q3) :
				  (c.y > 0) ? Q2 : (c.y < 0) ? Q4 : Q0;

	if (c.y >= 0 && result.r != 0)
		result.theta = acos(c.x / result.r);
	else if (c.y < 0)
		result.theta = -acos(c.x / result.r);
	else if (result.r == 0) {
		result.theta = 0.0f;
		result.r = 0.0f;
		result.quad = Q0;
	}

	return result;
}

coords_polar cart2polar_c(coords_cart c) {
	coords_polar result;
	double complex tmp = c.x + c.y * I;

	result.quad = (c.x > 0) ? ((c.y >= 0) ? Q1 : Q4) :
				  (c.x < 0) ? ((c.y > 0) ? Q2 : Q3) :
				  (c.y > 0) ? Q2 : (c.y < 0) ? Q4 : Q0;

	result.r = cabs(tmp);
	result.theta = carg(tmp);

	return result;
}
