/* 
 *
 * Task: Which of the following are not legal constants in C? Classify each
 * legal constant as either integer or floating-point.
 *
 * (a) 010E2 | float
 * (b) 32.1E+5 | float
 * (c) 0790 | error: invalid digit "9" in octal constant
 * (d) 100_000 | error: invalid suffix "_000" on integer constant
 * (e) 3.978e-2 | float
 *
 * Date: 2025-02-17
 * Time: 12:31 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("010E2 = %f\n", 010E2);
	printf("32.1E+5 = %f\n", 32.1E+5);
	/*
	printf("0790 = %d\n", 0790);
	printf("100_000 = %d\n", 100_000)
	*/
	printf("3.978e-2 = %f\n", 3.978e-2);

	exit(EXIT_SUCCESS);
}
