/*
 *
 * Project 1.
 *
 * Task: Modify Programming Project 7 from Chapter 2 so that it includes the
 * following function:
 *
 * 	void pay_amount(int dollars, int *twenties, int *tens,
 * 					int *fives, int *ones);
 *
 * The function determines the smallest number of $20, $10, $5, and $1 bills
 * necessary to pay the amount represented by the dollars parameter.
 * The twenties parameter points to a variable in which the function will store
 * the number of $20 bills required. The tens, fives, and ones parameters
 * are similar.
 *
 * Date: 2025-04-09
 * Time: 06:24 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void pay_amount(int dollars,
				int *twenties,
				int *tens,
				int *fives,
				int *ones);

int main(void)
{
	int input = 0;
	int twenty, ten, five, one = 0;

	printf("Enter a dollar amount: ");
	scanf("%d", &input);

	pay_amount(input, &twenty, &ten, &five, &one);

	printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenty, ten, five, one);

	exit(EXIT_SUCCESS);
}

void pay_amount(int dollars,
				int *twenties,
				int *tens,
				int *fives,
				int *ones)
{
	*twenties = dollars / 20;
	dollars %= 20;
	*tens = dollars / 10;
	dollars %= 10;
	*fives = dollars / 5;
	dollars %= 5;
	*ones = dollars;
}
