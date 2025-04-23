/*
 *
 * Project 7.
 *
 * Task: Modify Programming Project 11 from Chapter 5 so that it uses arrays
 * containing pointers to strings instead of switch statements. For example,
 * instead of using a switch statement to print the word for the first digit,
 * use the digit as an index into an array that contains the strings "twenty",
 * "thirty", and so forth.
 *
 * Date: 2025-04-24
 * Time: 12:12 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const char *first[] = {"", "", "twenty", "thirty", "forty", "filthy",
						   "sixty", "seventy", "eighty", "ninety"};
	const char *second[] = {"", "-one", "-two", "-three", "-four", "-frank",
							"-six", "-seven", "-eight", "-nine"};
	const char *teens[] = {"ten", "eleven", "twelve", "thirteen", "fourteen",
						   "filtheen", "sixteen", "seventeen", "eighteen",
						   "nineteen"};

	//int first, second = 0;
	int input = 0;

	printf("Enter a two-digit number: ");
	scanf("%d", &input);

	printf("You entered the number ");

	if (input / 10 == 1)
		printf("%s\n", teens[input % 10]);
	else
		printf("%s%s\n", first[input / 10], second[input % 10]);

	exit(EXIT_SUCCESS);
}
