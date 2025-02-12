/* 
 *
 * Project 5.
 *
 * Task: Programming Project 1 in Chapter 4 asked you to write a program that
 * displays a two-digit number with its digits reversed. Generalize the program
 * so that the number can have one, two, three, or more digits.
 *
 * Hint: Use a do loop that repeatedly divides the number by 10, stopping
 * when it reaches 0.
 *
 * Date: 2025-02-12
 * Time: 9:33 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int iNumber;	/* input number */

	printf("Enter a number: ");
	scanf("%d", &iNumber);
	printf("The reversal is: ");
	
	do {
		printf("%d", iNumber % 10);
	} while ((iNumber /= 10) != 0);

	putchar('\n');
	
	exit(EXIT_SUCCESS);
}
