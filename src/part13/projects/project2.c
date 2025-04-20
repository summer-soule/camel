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

int main(void) {
	char reminders[MAX_REMIND][MSG_LEN+3];
	char day_str[3], msg_str[MSG_LEN+1];
	int day, i, j, num_remind = 0;

	for (;;) {
		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}
		
		printf("Enter day and reminder: ");
		scanf("%2d", &day);

		// (a) implementation
		if (day < 0 || day > 31) {
			printf("err: Day can't be negative or greater than 31\n");
			continue;
		}

		if (day == 0)
			break;

		sprintf(day_str, "%2d", day);
		read_line(msg_str, MSG_LEN);

		for (i = 0; i < num_remind; i++)
			if (strcmp(day_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);

		strcpy(reminders[i], day_str);
		strcat(reminders[i], msg_str);

		num_remind++;
	}

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
