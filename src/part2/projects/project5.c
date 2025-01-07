//-----------------------------------------------------------------------------
//
// Task: 
//
// Write a program that asks the user to enter a value for x and then displays
// the value of the following polynomial:
//
// 3*(x^5) + 2*(x^4) - 5*(x^3) - x^2 + 7*x - 6
//
// Hint: C doesn't have an exponentiation operator, so you’ll need to multiply 
//		 x by itself repeatedly in order to compute the powers of x. 
// 		 (For example, x * x * x is x cubed.)
//
// Date: 2025-1-7
// Time: 7:02 AM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define POLY 3*pow(x,5) + 2*pow(x,4) - 5*pow(x,3) - pow(x,2) + 7*x - 6

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

	printf("3*(x^5) + 2*(x^4) - 5*(x^3) - x^2 + 7*x - 6 = %.1f\n", POLY);

	exit(EXIT_SUCCESS);
}
