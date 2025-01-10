//-----------------------------------------------------------------------------
//
// Task: Suppose that we call scanf as follows:
// 
// 		 scanf("%d%f%d", &i, &x, &j);
//
// 		 If the user enters
// 		 10.3 5 6
//
// 		 what will be the values of i, x and j after the call?
// 		 (Assume that i and j are int variables and x is a float variable)
//
// A:	 
// 		 i = 10 instead 10.3
// 		 x = 0.300000 instead 5
// 		 j = 5 instead 6
//
// 		 scanf storing 10 in i because i is integer
// 		 	   storing 0.3 in x because fractial part of 10.3 was not passed
// 		 	   storing 5 in j because fractial part of 10.3 was stored in x
// 		 	   		and 5 is the next number in entered string
//
// Date: 2025-1-10
// Time: 12:06 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	float x;

	printf("Enter i, x and j: ");
	scanf("%d%f%d", &i, &x, &j);

	printf("i = %d\nx = %f\nj = %d\n", i, x, j);

	exit(EXIT_SUCCESS);
}
