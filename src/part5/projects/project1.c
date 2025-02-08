/* 
 *
 * Project 1.
 *
 * Task: Write a program that calculates how many digits a number contains:
 *
 * Enter a number: 374
 * The number 374 has 3 digits
 *
 * You may assume that the number has no more than four digits.
 *
 * Hint: Use if statements to test the number. For example, if the number is
 * between 0 and 9, it has one digit. If the number is between 10 and 99,
 * it has two digits.
 *
 * Date: 2025-02-07
 * Time: 17:36 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int iNum = 0;

	printf("Enter a number: ");
	scanf("%d", &iNum);

	if(iNum <= 9999 && iNum >= 0) {
		printf("The number %d has %d digits\n", iNum, 
				(iNum >= 0 && iNum <= 9) ? 1 :
				(iNum >= 10 && iNum <= 99) ? 2 :
				(iNum >= 100 && iNum <= 999) ? 3 : 4);
	}
	else
		printf("The number %d is out of range!\n", iNum);
			
	exit(EXIT_SUCCESS);
}
