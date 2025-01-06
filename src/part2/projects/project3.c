//-----------------------------------------------------------------------------
//
// Task: Modify the program of Programming Project 2 so that it prompts the
// 		 user to enter the radius of the sphere.
//
// Date: 2025-1-6
// Time: 14:05 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265f

int main(void)
{
	double r;

	printf("Enter radius of the sphere with dotted notation: ");
	scanf("%lf", &r);

	printf("r = %.3f\n", r);
	printf("v = %.5f\n", (4.0f/3.0f)*PI*pow(r,3.0));

	exit(EXIT_SUCCESS);
}
