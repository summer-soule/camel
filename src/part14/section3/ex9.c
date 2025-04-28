/*
 *
 * Task: Write the following parameterized macros.
 * 		 	(a) CHECK(x,y,n)
 * 		 		Has the value 1 if both x and y fall between 0 and n-1,
 * 		 		inclusive
 * 		 	(b) MEDIAN(x,y,z)
 * 		 		Finds the median of x, y, and z.
 * 		 	(c) POLYNOMIAL(x)
 * 		 		Computes the polynomial 
 * 		 		3*(x^5) + 2*(x^4) - 5*(x^3) - x^2 + 7x - 6
 *
 * Date: 2025-04-29
 * Time: 01:02 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define CHECK(x,y,n) (((x)>0&&(x)<((n)-1)&&(y)>0&&(y)<((n)-1))?1:0)
#define MEDIAN(x,y,z) (((x)<=(y)&&(x)>=(z))?(x):((y)>=(x)&&(y)<=(z))?(y):(z))
#define POLYNOMIAL(x)			\
	((3*((x)*(x)*(x)*(x)*(x)))	  +	\
	(2*((x)*(x)*(x)*(x)))		  -	\
	(5*((x)*(x)*(x)))			  -	\
	((x)*(x))					  +	\
	(7*(x))						  -	\
	6)

int main(void) {
	int a = 5;
	int b = 8;
	int c = 10;

	int z = 5;
	int x = 10;
	int v = 8;

	printf("CHECK(%d, %d, %d): %d\n", a, b, c, CHECK(a,b,c));
	printf("CHECK(%d, %d, %d): %d\n", a, c, b, CHECK(a,c,b));
	printf("MEDIAN(%d, %d, %d): %d\n", a, b, c, MEDIAN(a,b,c));
	printf("MEDIAN(%d, %d, %d): %d\n", z, x, v, MEDIAN(z,x,v));
	printf("POLYNOMIAL(%d): %d\n", a, POLYNOMIAL(a));

	exit(EXIT_SUCCESS);
}
