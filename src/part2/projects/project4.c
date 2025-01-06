//-----------------------------------------------------------------------------
//
// Task: Write a program that asks the user to enter a dollars-and-cents 
// 		 amount, then displays the amount with 5% tax added:
//
//	     Enter an amount: 100.00
//	     With tax added: $105.00
//
// Date: 2025-1-6
// Time: 14:05 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float money;

	printf("Enter an amount: ");
	scanf("%f", &money);
	printf("With tax added: $%.2f\n", money * 1.05f);

	exit(EXIT_SUCCESS);
}
