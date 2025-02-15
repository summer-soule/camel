/* 
 *
 * Project 12.
 *
 * Task: Modify Programming Project 11 so that the program continues adding
 * terms until the current term becomes less than E, where E is a small
 * (floating-point) number entered by the user.
 *
 * Date: 2025-02-14
 * Time: 14:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float term, e, eps, denom;

	term = 1.0f;
	e = 1.0f;
	denom = 1;
	
	printf("Enter epsilon: ");
	scanf("%f", &eps);

	for(int i = 1; term > eps; i++) {
		term = 1.0f / (denom *= i);
		e += term;
	}

	printf("Approx e = %f\n", e);

	exit(EXIT_SUCCESS);
}
