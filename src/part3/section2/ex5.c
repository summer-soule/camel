//-----------------------------------------------------------------------------
//
// Task: Suppose that we call scanf as follows:
// 		
// 		 scanf("%f%d%f", &x, &i, &y);
// 		 
// 		 If the user enters
//
// 		 12.3 45.6 789
//
//	     what will be the values of x, i, and y after the call?
//	     (Assume that x and y are float variables and i is an int variable.)
//
// A:
// x = 12.3
// 		correct
// i = 45
// 		incorrect - input 45.6, but i is int and its format specification is %d
// y = 0.6
// 		incorrect - because of 2nd format specification %d, fraction part
// 					of 45.6 dropped and become next stored value in y
// 
// Date: 2025-1-10
// Time: 12:06 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float x, y = 0.0f;
	int i = 0;

	printf("Enter 12.3, 45.6 and 789: ");
	scanf("%f%d%f", &x, &i, &y);
	printf("x = %f\ni = %d\ny = %f\n", x, i, y);

	exit(EXIT_SUCCESS);
}
