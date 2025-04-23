/*
 *
 * Project 2.
 *
 * Task: Improve the remind.c program of Section 13.5 in the following ways:
 *
 * 	(a) Have the program print an error message and ignore the reminder if
 * 		the corresponding day is negative or larger than 31.
 * 		Hint: Use the continue statement.
 * 	(b) Allow the user to enter a day, a 24-hour time, and a reminder.
 * 		The printed reminder list should be sorted first by day, then by time.
 * 		(The original program allows the user to enter a time, but it's
 * 		treated as part of the reminder.)
 * 	(c) Have the program print a one-year reminder list. Require the user to
 * 		enter days in the from month/day.
 *
 * Date: 2025-04-20
 * Time: 01:08 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);
void reminders_sort(char [][MSG_LEN+3], int n);

int main(void) {
	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[4], time_str[6], msg_str[MSG_LEN+1];
	char month_str[11];
	int month, day, i, j, num_remind = 0;
	int hh = 0, mm = 0;
	const char *months[] = { "January", "February", "March",
						 	"April", "May", "June",
						 	"July", "August", "September",
						 	"October", "November", "December" };

	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter month, day, time (hh:mm) and reminder: ");
		scanf("%2d", &month);

		// check for end of input
		if (month == 0)
			break;

		scanf(" %2d", &day);

		if (month < 0 || month > 12) {
			printf("err: month can't be negative or greater than 12\n");
			continue;
		}

		switch(month) {
			case 1: case 3: case 5: case 7: case 8: case 10: case 12:
				if (day < 0 || day > 31) {
					printf("err: Day can't be negative or greater than 31\n");
					continue;
				}
				break;
			case 2:
				if (day < 0 || day > 29) {
					printf("err: Day can't be negative or greater than 29\n");
					continue;
				}
				break;
			case 4: case 6: case 9: case 11:
				if (day < 0 || day > 29) {
					printf("err: Day can't be negative or greater than 30\n");
					continue;
				}
				break;
		}

		scanf("%02d:%02d", &hh, &mm); 

		// (b.1) check for time format bounds
		if (hh > 24 || hh < 0) {
			printf("err: hours value is out of range (0-24)\n");
			continue;
		}

		if (mm > 60 || hh < 0) {
			printf("err: minutes value is out of range (0-60)\n");
			continue;
		}

		sprintf(time_str, "%02d:%02d", hh, mm);
		sprintf(day_str, "%2d", day);
		strcpy(month_str, months[month-1]);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);

		strcpy(reminders[i], strcat(month_str, " "));
		strcat(reminders[i], strcat(day_str, " "));
		strcat(reminders[i], time_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	reminders_sort(reminders, num_remind);

	printf("\nDay Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);

	exit(EXIT_SUCCESS);
}

int read_line(char str[], int n)
{
	int ch, i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
	str[i] = '\0';
	return i;
}

void reminders_sort(char a[][MSG_LEN+3], int n)
{
	// where to store data from reminder
	int hh, mm; // hours and minutes for current reminder
	int dd; // days in current month
	int mn1 = 0; // days in past months
	char mn[11]; // store month string

	// where to store absolute time for reminders
	int a_time[n]; // absolute time in minutes for reminders array

	// temporary variables for swap purposes
	int tmp; // temporary store for swap a_time
	char a_tmp[MAX_REMIND+3]; // temporary store for swap a

	const int monthDays[] = { 31, 28, 31, 30,
							  31, 30, 31, 31,
							  30, 31, 30, 31 };

	const char *months[] = { "January", "February", "March",
						 	"April", "May", "June",
						 	"July", "August", "September",
						 	"October", "November", "December" };

	// set a_time[] elements to 0
	int *p = a_time;
	while (p < a_time+n)
		*p++ = 0;

	// parse and store data from reminders[]
	// (a[][MSG_LEN+3] in context of function reminders_sort)
	for (int i = 0, m = 0; i < n; i++) {
		sscanf(a[i], "%s %d %d:%d", mn, &dd, &hh, &mm);

		while (strcmp(mn, months[m]) != 0)
			mn1 += monthDays[m++];

		a_time[i] = (mn1+dd-1) * 1440 + hh * 60 + mm;
	}

	// sort reminders[]
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a_time[i] < a_time[j]) {
				strcpy(a_tmp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], a_tmp);

				tmp = a_time[i];
				a_time[i] = a_time[j];
				a_time[j] = tmp;
			}
		}
	}
}
