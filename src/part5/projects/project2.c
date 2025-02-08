/* 
 *
 * Project 2.
 *
 * Task: Write a program that asks the user for a 24-hour time, then displays
 * the time in 12-hour form:
 *
 * Enter a 24-hour time: 21:11
 * Equivalent 12-hour time: 9:11 PM
 *
 * Be careful not to display 12:00 as 0:00.
 *
 * Date: 2025-02-08
 * Time: 05:31 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hr, min;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hr, &min);

	if((hr >= 0) && (hr <= 24) && (min >= 0) && (min <= 60)) {
		printf("Equivalent 12-hour time: %d:%02d %s\n",
				(hr > 12) ? hr - 12 : hr, min,
				(hr >= 12) ? "PM" : "AM");
	}
	else
		printf("Invalid time range or format!\n");

	exit(EXIT_SUCCESS);
}
