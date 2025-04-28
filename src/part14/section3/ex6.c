/*
 *
 * Task:
 * 	(a) Write a macro DISP(f,x) that expands into a call of printf that
 * 		displays the value of the function f when called with argument x.
 * 		For example.
 *
 * 			DISP(sqrt, 3.0);
 *
 * 		should expand into
 * 			
 * 			printf("sqrt (%g) = %g\n", 3.0, sqrt(3.0));
 *
 * 	(b) Write a macro DISP2(f,x,y) that's similar to DISP but works for
 * 		functions with two arguments.
 *
 * Date: 2025-04-28
 * Time: 08:13 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define DISP(f,x) printf(#f " (%g) = %g\n", x, f(x))
#define DISP2(f,x,y) printf(#f " (%g,%g) = %g\n", x, y, f(x,y))

int main(void) {
	double a = 4.0f;
	double b = 3.0f;

	DISP(sqrt,a);
	DISP2(pow,a,b);

	exit(EXIT_SUCCESS);
}
