/*
 *
 * Project 2.
 *
 * Task: Modify Programming Project 5 from Chapter 5 so that it uses a function
 * to compute the amount of income tax. When passed an amount of taxable income,
 * the function will return the tax due.
 *
 * Date: 2025-03-31
 * Time: 12:21 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

float calc_tax(float);

int main(void)
{
	float income = 0.0f;

	printf("Enter taxable income: ");
	scanf("%f", &income);

	printf("Tax due: %.2f\n", calc_tax(income));

	exit(EXIT_SUCCESS);
}

float calc_tax(float income) {
	float tax = 0.0f;

	if(income < 750.0)
		tax = 0.01f * income;
	else if(income < 2250)
		tax = 7.5f + 0.02f * income;
	else if(income < 3750)
		tax = 37.50f + 0.03f * income;
	else if(income < 5250)
		tax = 82.50f + 0.04f * income;
	else if(income < 7000)
		tax = 142.50f + 0.05f * income;
	else
		tax = 230.00f + 0.06f * income;
	return tax;
}
