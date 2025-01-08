//-----------------------------------------------------------------------------
//
// Task: 
//
// Write a program that asks the user to enter a U.S. dollar amount and then
// shows how to pay that amount using the smallest number
// of $20, $10, $5, and $1 bills:
//
// Enter a dollar amount: 93
// $20 bills: 4
// $10 bills: 1
// $5  bills: 0
// $1  bills: 3
//
// Hint: Divide the amount by 20 to determine the number of $20 bills needed,
// and then reduce the amount by the total value of the $20 bills.
// Repeat for the other bill sizes. Be sure to use integer values throughout,
// not floating-point numbers.
//
// Date: 2025-1-8
// Time: 18:42 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int input = 0;
	int twenty, ten, five, one = 0;

	printf("Enter a dollar amount: ");
	scanf("%d", &input);

	twenty = input / 20;
	input %= 20;
	ten = input / 10;
	input %= 10;
	five = input / 5;
	input %= 5;
	one = input;

	printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", twenty, ten, five, one);

	exit(EXIT_SUCCESS);
}
