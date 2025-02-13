/* 
 *
 * Project 9.
 *
 * Task: Programming Project 8 in Chapter 2 asked you to write a program that
 * calculates the remaining balance on a loan after the first, second, and
 * third monthly payments. Modify the program so that it also asks the user to
 * enter the number of payments and then displays the balance remaining after
 * each of these payments.
 *
 * Date: 2025-02-13
 * Time: 10:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define PAYMENT loan = loan - payment + loan * (rate / 100.0f / 12.0f)

int main(void)
{
	double loan, rate, payment = 0;
	int paymentNum = 1;

	printf("Enter amount of loan: ");
	scanf("%lf", &loan);

	printf("Enter interest rate: ");
	scanf("%lf", &rate);

	printf("Enter monthly payment: ");
	scanf("%lf", &payment);

	printf("Enter number of payments: ");
	scanf("%d", &paymentNum);

	while (paymentNum-- > 0) {
		printf("Balance remaining after %d payment: $%.2f\n",
				paymentNum,
				PAYMENT);
	}

	exit(EXIT_SUCCESS);
}
