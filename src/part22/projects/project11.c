/*
 *
 * Project 11.
 *
 * Task:
 *		Write a program that read a date from the command line
 *		and displays it in the following form:
 *
 *		September 13, 2010
 *
 *		Allow the user to enter the date as either 9-13-2010
 *		or 9/13/2010; you may assume that there are no spaces
 *		in the date. Print an error message if the date
 *		doesn't have one of the specified forms.
 *
 *		Hint: Use sscanf to extract the month, day, and year
 *			  from the command-line argument.
 *
 * Date: 2025-12-29
 * Time: 06:31 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

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

void usage(char *);
bool date_check(int, int, int);

int main(int argc, char *argv[]) {
	int month, day, year;

	if (argc != 2) {
		usage(argv[0]);
		exit(EXIT_FAILURE);
	}

	sscanf(argv[1], "%d%*[-/]%d%*[-/]%d", &month, &day, &year);

    date_check(month, day, year)
    ? printf("%s %.2d, %.4d\n", months[month], day, year)
    : fprintf(stderr, "invalid input\n");

	exit(EXIT_SUCCESS);
}

bool date_check(int mm, int dd, int yyyy)
{
	if (mm < 1 || mm > 12) {
		fprintf(stderr, "err: month not valid (valid is 1..12)\n");
		return false;
	}
	switch (yyyy % 4) {
		case 0:
			if (dd > days_leap[mm]) {
				fprintf(stderr, "err: in %s only %d days.\n",
						months[mm],
						days_leap[mm]);
				return false;
			}
		default:
			if (dd > days_nleap[mm]) {
				fprintf(stderr, "err: in %s only %d days.\n",
						months[mm],
						days_leap[mm]);
				return false;
			}
	}
	return true;
}

void usage(char *progname) {
	printf("usage: %s DATE\n", strrchr(progname, '/')+1);
	printf("\nArguments:\n");
	printf("\tDATE\t\tformatted string like\n\t\t\tmm-dd-yyyy or mm/dd/yyyy\n");
}
