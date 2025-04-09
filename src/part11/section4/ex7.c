/*
 *
 * Task: Write the following function:
 *
 * 	void split_date(int day_of_year, int year,
 * 					int *month, int *day);
 *
 * day_of_year is an integer between 1 and 366, specifying a particular day
 * within the year designated by year. month and day point to variables in
 * which the function will store the equivalent month (1-12) and day within
 * that month (1-31).
 *
 * Date: 2025-04-09
 * Time: 04:24 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void split_date(int day_of_year,
				int year,
				int *month,
				int *day);

int main(void) {
	int year, dayOfYear;
	int month, day;

	printf("Enter year: ");
	scanf("%d", &year);
	printf("Enter day of year: ");
	scanf("%d", &dayOfYear);

	if (((year % 4) != 0 && dayOfYear > 365) || dayOfYear > 367)
		printf("In this year only 365 days or out of max days in year entered.\n");
	else {
		split_date(dayOfYear, year, &month, &day);
		printf("It is %4d-%02d-%02d\n", year, month, day);
	}

	exit(EXIT_SUCCESS);
}

void split_date(int day_of_year,
				int year,
				int *month,
				int *day)
{
	*day = day_of_year;
	for (*month = 1; *month < 13 && *day > 31; (*month)++) {
		switch(*month) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if (*day-31 > 0) *day -= 31;
				break;
			case 4: case 6: case 9: case 11:
				if (*day-30 > 0) *day -= 30;
				break;
			case 2:
				if (*day-29 > 0) *day -= (year % 4) ? 28 : 29;
				break;
		}
	}
}
