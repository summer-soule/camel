/* 
 * Project 6.
 *
 * Task: European countries use a 13-digit code, known as a European Article
 * Number (EAN) instead of the 12-digit Universal Product Code (UPC) found
 * in North America. Each EAN ends with a check digit, just as a UPC does.
 * The technique for calculating the check digit is also similar:
 *
 * 		Add the second, fourth, sixth, eighth, tenth, and twelfth digits.
 * 		Add the first, third, fifth, seventh, ninth, and eleventh digits.
 * 		Multiply the first sum by 3 and add it to the second sum.
 * 		Subtract 1 from the total.
 * 		Compute the remainder when the adjusted total is divided by 10.
 * 		Subtract the remainder from 9.
 *
 * For example, consider Gulluoglu Turkish Delight Pistachio & Coconut,
 * which has an EAN of 8691484260008. The first sum is
 * 6 + 1 + 8 + 2 + 0 + 0 = 17, and the second sum is 8 + 9 + 4 + 4 + 6 + 0 = 31
 * Multiplying the first sum by 3 and adding the second yields 82. Subtracting
 * 1 gives 81. The remainder upon dividing by 10 is 1. When the remainder is
 * subtracted from 9, the result is 9, whoch matches the last digit of the
 * original code. Your job is to modify the upc.c program of Section 4.1 so
 * that it calculates the check digit for an EAN. The user will enter the first
 * 12 digits of the EAN as a single number:
 *
 * Enter the first 12 digits of an EAN: 869148426000
 * Check digit: 8
 *
 * Date: 2025-02-05
 * Time: 16:37 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define INPUT 12

int main(void)
{
	int	first_sum, second_sum, total;
	long int upcArray[INPUT];
	long int upcSrc;
	int i, j;
	
	first_sum = 0;
	second_sum = 0;

	printf("Enter the first 12 digits of a EAN: ");

	scanf("%13ld", &upcSrc);
	printf("Entered number: %ld\n", upcSrc);

	upcArray[11] = upcSrc % 10;
	
	for(i = 0, j = 10; i < 11; i++)
	{
		if(upcSrc > 9)
			upcArray[j] = (upcSrc /= 10) % 10;
		else
			upcArray[j] = upcSrc;
		j--;
	}

	for(i = 0; i < 12; i++)
		if((i % 2) != 0)
		{
			first_sum += upcArray[i];
		}


	for(i = 0; i < 12; i++)
		if((i % 2) == 0)
		{
			second_sum += upcArray[i];
		}

	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	exit(EXIT_SUCCESS);
}
