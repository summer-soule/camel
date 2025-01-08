//-----------------------------------------------------------------------------
//
// Task: 
//
// Modify the program of Programming Project 5 so that the polynomial is
// evaluated using the following formula: 
//
// ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6
//
// Note that the modified program performs fewer multiplications.
// This technique for evaluating polynomials is known as Horner's Rule.
//
// Date: 2025-1-8
// Time: 18:42 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

#define POLY (((((3*x+2)*x - 5) * x - 1) * x + 7) * x - 6)
#define PRINT_POLY(POLY) (printf("%s = %.1f\n", #POLY, POLY));

int main(void)
{
	double x;
	int ret;

	printf("Enter x value: ");

	if ((ret = scanf("%lf", &x)) == 1);
	else {
		printf("Not a valid input! Exiting...\n");
		printf("err: %d\n", ret);
		exit(ret);
	}

	PRINT_POLY(POLY)

	exit(EXIT_SUCCESS);
}
