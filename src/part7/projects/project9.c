/* 
 *
 * Project 9.
 *
 * Task: Write a program that asks the user for a 12-hour time, then displays
 * the time in 24-hour form:
 *
 * Enter a 12-hour time: 9:11 PM
 * Equivalent 24-hour time: 21:11
 *
 * See Programming Project 8 for a description of the input format.
 *
 * Date: 2025-02-26
 * Time: 10:21 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) 
{
	int hr, min;
	char ch;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hr, &min, &ch);

	switch(toupper(ch)) {
		case 'A':
			break;
		case 'P':
			hr = hr < 12 ? hr + 12 : hr;
			break;
		default:
			printf("Invalid time format!\n");
			exit(EXIT_SUCCESS);
	}
	printf("Equivalent 24-hour time: %2d:%2d\n", hr, min);

	exit(EXIT_SUCCESS);
}
