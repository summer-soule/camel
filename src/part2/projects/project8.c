//-----------------------------------------------------------------------------
//
// Task: 
//
// Write a program that calculates the remaining balance on a loan after the
// first, second, and third monthly payments:
//
// Enter amount of loan: 20000,00
// Enter interest rate: 6.0
// Enter monthly payment: 386.66
//
// Balance remaining after first payment: $19713.34
// Balance remaining after second payment: $19425.25
// Balance remaining after third payment: $19135.71
//
//
// Display each balance with two digits after the decimal point.
// Hint: Each month, the balance is decreased by the amount of the payment,
// but increased by the balance times the monthly interest rate.
// To find the monthly interest rate, convert the interest rate entered by
// the user to a percentage and divide it by 12.
//
// Date: 2025-1-7
// Time: 5:17 AM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

#define PAYMENT loan = loan - payment + loan * (rate / 100.0f / 12.0f)

int main(void)
{
	double loan, rate, payment = 0;

	printf("Enter amount of loan: ");
	scanf("%lf", &loan);

	printf("Enter interest rate: ");
	scanf("%lf", &rate);

	printf("Enter monthly payment: ");
	scanf("%lf", &payment);

	printf("Balance remaining after first payment: $%.2f\n", PAYMENT);
	printf("Balance remainign after second payment: $%.2f\n", PAYMENT);
	printf("Balance remainign after third payment: $%.2f\n", PAYMENT);

	exit(EXIT_SUCCESS);
}
