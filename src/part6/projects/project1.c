/* 
 *
 * Project 1.
 *
 * Task: Write a program that finds the largest in a series of numbers entered
 * by the user. The program must prompt the user to enter numbers one by one.
 * When the user enters 0 or a negative number, the program must display the
 * largest nonnegative number entered:
 *
 * Enter a number: 60
 * Enter a number: 38.3
 * Enter a number: 4.89
 * Enter a number: 100.62
 * Enter a number: 75.2295
 * Enter a number: 0
 *
 * The largest number entered was 100.62
 *
 * Notice that the numbers aren't necessarily integers.
 *
 * Date: 2025-02-12
 * Time: 07:46 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float input, largest;

	largest = 0;

	do {
		printf("Enter a number: ");
		scanf("%f", &input);
		largest = input > largest ? input : largest;
	} while (input != 0);
	
	printf("The largest number entered was %f\n", largest);

	exit(EXIT_SUCCESS);
}
