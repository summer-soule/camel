//-----------------------------------------------------------------------------
//
// Task: Write a program that computes the volume of a sphere with a 10-meter 
// 		 radius, using the formula v = 4∕3πr^3 Write the fraction 4/3 as 
// 		 4.0f/3.0f. (Try writing it as 4/3. What happens?) 
// 		 
// 		 Hint: C doesn't have an exponentiation operator, so you’ll need to 
// 		 multiply r by itself twice to compute r^3.
//
// Date: 2025-1-6
// Time: 12:37 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

#define R 10.0f
#define PI 3.14159265f

int main(void)
{
	double v;

	v = 4.0f/3.0f*PI*R*R*R;
	printf("v = %.5f\n", v);

	exit(EXIT_SUCCESS);
}
