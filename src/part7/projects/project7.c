/* 
 *
 * Project 7.
 *
 * Task: Modify Programming Project 6 from Chapter 3 so that the user may add,
 * subtract, multiply, or divide two fractions (by entering either +, -, *, or
 * / between the fractions).
 *
 * Date: 2025-02-22
 * Time: 5:46 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int num1, denom1, num2, denom2, result_num, result_denom;

	printf("Enter two fractions separated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);

	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);

	exit(EXIT_SUCCESS);
}
