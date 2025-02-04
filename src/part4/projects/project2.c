/* 
 * Project 2.
 *
 * Task: Extend the program in Programming Project 1 to handle three-digit
 * numbers.
 *
 * Date: 2025-02-04
 * Time: 06:47 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int iNumber;	/* input number */

	printf("Enter a three-digit number: ");
	scanf("%d", &iNumber);
	printf("The reversal is: ");
	
	if(iNumber > 999)
		printf("Entered number has more than 2 digits! Exiting...\n");
	else
		printf("%d%d%d\n", iNumber % 10, (iNumber / 10) % 10, iNumber / 100);
	
	exit(EXIT_SUCCESS);
}
