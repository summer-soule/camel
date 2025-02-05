/* 
 * Project 3.
 *
 * Task: Rewrite the program in Programming Project 2 so that it prints the
 * reversal of a three-digit number without using arithmetic to split the
 * number into digits.
 *
 * Hint: See the upc.c program of Section 4.1.
 *
 * Date: 2025-02-05
 * Time: 05:59 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int num1, num2, num3;	/* 3 input numbers */

	printf("Enter a three-digit number: ");
	scanf("%1d %1d %1d", &num1, &num2, &num3);
	printf("The reversal is: %d%d%d\n", num3, num2, num1);
	
	exit(EXIT_SUCCESS);
}
