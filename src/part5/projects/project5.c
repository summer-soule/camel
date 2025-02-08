/* 
 *
 * Project 5.
 *
 * Task: In one state, single residents are subject to the following income tax:
 *
 * Income			Amount of tax
 * Not over $750	1% of income
 * $750-$2.250		$7.50		plus 2% of amount over $750
 * $2.250-$3.750	$37.50		plus 3% of amount over $2.250
 * $3.750-$5.250	$82.50		plus 4% of amount over $3.750
 * $5.250-$7.000	$142.50		plus 5% of amount over $5.250
 * Over $7.000		$230.00		plus 6% of amount over $7.000
 *
 * Write a program that asks the user to enter the amount of taxable income,
 * then displays the tax due.
 *
 * Date: 2025-02-08
 * Time: 08:54 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float income, tax;

	income = tax = 0.0;

	printf("Enter taxable income: ");
	scanf("%f", &income);

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

	printf("Tax due: %.2f\n", tax);

	exit(EXIT_SUCCESS);
}
