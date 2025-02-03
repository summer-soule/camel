/*
 * Project 1.
 *
 * Task: Write a program that asks the user to enter a two-digit number, then
 * prints the number with its digits reversed. A session with the program
 * should have the following appearance:
 *
 * Enter a two-digit number: 28
 * The reversal is: 82
 *
 * Read the number using %d, then break it into two digits.
 *
 * Hint: If n is an integer, then n % 10 is the last digit in n and n / 10
 * is n with the last digit removed.
 *
 * Date: 2025-02-03
 * Time: 07:44 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int iNumber;	/* input number */

	printf("Enter a two-digit number: ");
	scanf("%d", &iNumber);
	printf("The reversal is: ");
	
	if(iNumber > 99)
		printf("Entered number has more than 2 digits! Exiting...\n");
	else
		printf("%d%d\n", iNumber % 10, iNumber / 10);
	
	exit(EXIT_SUCCESS);
}
