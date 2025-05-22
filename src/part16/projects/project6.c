/*
 *
 * Project 6.
 *
 * Task:
 *		Modify Programming Project 9 from Chapter 5 so that each date entered
 *		by the user is stored in a date structure (see Exercise 5). Incorporate
 *		the compare_dates function of Exercise 5 into your program.
 *
 * Date: 2025-05-22
 * Time: 08:24 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct date {
	int day, month, year;
};

int compare_dates(struct date d1, struct date d2);
bool date_check(struct date d);

int main(void)
{
	struct date mm1, mm2;

	do {
		printf("Enter first date (mm/dd/yy): ");
		scanf("%d/%d/%d", &mm1.month, &mm1.day, &mm1.year);
	} while (!date_check(mm1));

	do {
		printf("Enter second date (mm/dd/yy): ");
		scanf("%d/%d/%d", &mm2.month, &mm2.day, &mm2.year);
	} while (!date_check(mm2));

	switch (compare_dates(mm1, mm2)) {
	case -1:
		printf("%d/%02d/%02d is earlier than %d/%02d/%02d\n",
			   mm1.month, mm1.day, mm1.year,
			   mm2.month, mm2.day, mm2.year);
		break;
	case 0:
		printf("Dates are equal!\n");
		break;
	case 1:
		printf("%d/%02d/%02d is later than %d/%02d/%02d\n", mm1.month,
			   mm1.day, mm1.year, mm2.month, mm2.day, mm2.year);
		break;
	}	   

	exit(EXIT_SUCCESS);
}

/*	Returns -1 if d1 is an earlier date than d2, +1 if
	d1 is a later date than d2, and 0 if d1 and d2 are the
	same. */
int compare_dates(struct date d1, struct date d2) {
	if (d1.year < d2.year)
		return -1;
	else if (d1.year > d2.year)
		return 1;
	else if (d1.month < d2.month)
		return -1;
	else if (d1.month > d2.month)
		return 1;
	else if (d1.day < d2.day)
		return -1;
	else if (d1.day > d2.day)
		return 1;
	else
		return 0;
}

// date_check: validate the date
//			   return 1 if valid and 0 if it's not
bool date_check(struct date d) {

	// check month
	if (d.month <= 0 || d.month > 12) {
		printf("err: invalid month (1-12)\n");
		return false;
	}

	// check days in month
	switch (d.month) {
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			if (d.day <= 0 || d.day > 31) {
				printf("err: ivalid days in month (1-31)\n");
				return false;
			}
			break;
		case 4: case 6: case 9: case 11:
			if (d.day <= 0 || d.day > 30) {
				printf("err: invalid days in month (1-30)\n");
				return false;
			}
			break;
		case 2:
			if (d.day <= 0 || d.day > ((d.year % 4) ? 29 : 28)) {
				printf("err: invalid days in month (1-%d)\n",
					   d.year % 4 ? 29 : 30);
				return false;
			}
			break;
	}
	return true;		
}
