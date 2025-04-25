/*
 *
 * Project 18.
 *
 * Task: Write a program that accepts a date from the user in the form
 * mm/dd/yyyy and then displays it in the form month dd, yyyy, where month
 * is the name of the month:
 *
 * 	Enter a date (mm/dd/yyyy): 2/17/2011
 * 	You entered the date February 17, 2011
 *
 * Store the month names in an array that contains pointers to strings.
 *
 * Date: 2025-04-24
 * Time: 11:39 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void date_read(int *, int *, int *);
void date_print(int , int , int );
bool date_check(int , int , int );

int main(void) {
	int mm, dd, yyyy;

	date_read(&mm, &dd, &yyyy);
	date_print(mm, dd, yyyy);

	exit(EXIT_SUCCESS);
}

void date_read(int *mm, int *dd, int *yyyy)
{
	int mm_tmp, dd_tmp, yyyy_tmp;

	do {
		printf("Enter a date (mm/dd/yyyy): ");
		scanf("%d/%d/%d", &mm_tmp, &dd_tmp, &yyyy_tmp);
	} while (!date_check(mm_tmp, dd_tmp, yyyy_tmp));
	*mm = mm_tmp; *dd = dd_tmp; *yyyy = yyyy_tmp;
}

void date_print(int mm, int dd, int yyyy)
{
	const char *months[] = {"",
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December"};
	printf("You entered the date %s %d, %d\n", months[mm], dd, yyyy);
}

bool date_check(int mm, int dd, int yyyy)
{
	const char *months[] = { "",
		"January", "February", "March", "April",
		"May", "June", "July", "August",
		"September", "October", "November", "December" };

	const int days_leap[13] = { 0,
		31, 29, 31, 30,
		31, 30, 31, 31,
		30, 31, 30, 31 };

	const int days_nleap[13] = { 0,
		31, 28, 31, 30,
		31, 30, 31, 31,
		30, 31, 30, 31 };

	if (mm < 1 || mm > 12) {
		printf("err: month not valid (valid is 1..12)\n");
		return false;
	}
	switch (yyyy % 4) {
		case 0:
			if (dd > days_leap[mm]) {
				printf("err: in %s only %d days.\n",
						months[mm],
						days_leap[mm]);
				return false;
			}
		default:
			if (dd > days_nleap[mm]) {
				printf("err: in %s only %d days.\n",
						months[mm],
						days_leap[mm]);
				return false;
			}
	}
	return true;
}
