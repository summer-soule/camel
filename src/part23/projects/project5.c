/*
 *
 * Project 5.
 *
 * Task:
 *		Suppose that money is deposited into a savings account
 *		and left for t years. Assume that the annual interest rate is r
 *		and that interest is compounded continuously.
 *		The formula A(t) = P*(e^(r*t)) can be used to calculate the final
 *		value of the account, where P is the original amount deposited.
 *		For example, $1000 left on deposit for 10 years at 6% interest
 *		would be worth $1000 * (e^(.06*10)) = $1000 * (e^.6) =
 *		= $1000 * 1.8221188 = $1.822.12. Write a program that displays
 *		the result of this calculation after prompting the user to enter
 *		the original amount deposited, the interest rate,
 *		and the number of years.
 *
 * Date: 2026-03-30
 * Time: 06:31 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	double deposit = 0.0f;
	float interest = 0.0f;
	unsigned int years = 0;
	double final = 0.0f;

	printf("Enter original deposit: ");
	scanf("%lf", &deposit);

	printf("Enter interest rate: ");
	scanf("%f", &interest);

	printf("Enter years: ");
	scanf("%ud", &years);

    final = deposit * exp((interest / 100.0) * years);

	printf("Final value: $%.2lf\n", final);

	exit(EXIT_SUCCESS);
}
