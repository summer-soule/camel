/*
 *
 * Task: Write a function day_of_year(month, day, year) that returns the day
 * of the year (an integer between 1 and 366) specified by the three arguments.
 *
 * Date: 2025-03-28
 * Time: 12:58 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int day_of_year(int, int, int);

int main(void) {
	int mm, dd, yy;

	printf("Enter date (mm:dd:yyyy): ");
	scanf("%d:%d:%d", &mm, &dd, &yy);

	printf("Day of the year: %d\n", day_of_year(mm, dd, yy));

	exit(EXIT_SUCCESS);
}

int day_of_year (int month, int day, int year)
{
	for (int i = 1; i < month; i++) {
		switch(i) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				day += 31;
				break;
			case 4: case 6: case 9: case 11:
				day += 30;
				break;
			case 2:
				day += (year % 4) == 0 ? 29 : 28;
				break;
		}
	}
	return day;
}
