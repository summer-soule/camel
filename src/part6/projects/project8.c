/* 
 *
 * Project 8.
 *
 * Task: Write a program that prints a one-month calendar. The user specifies
 * the number of days in the month and the day of the week on which the month
 * begins:
 *
 * Enter number of days in month: 31
 * Enter starting day of the week (1=Sun, 7=Sat): 3
 *
 *        1  2  3  4  5
 *  6  7  8  9 10 11 12
 * 13 14 15 16 17 18 19
 * 20 21 22 23 24 25 26
 * 27 28 29 30 31
 *
 * Hint: This program isn't as hard as it looks. The most important part is a
 * for statement that uses a variable i to count from 1 to n, where n is the
 * number of days in the month, printing each value of i. Inside the loop, an
 * if statement tests whether i is the last day in a week; if so, it prints
 * a new-line character.
 *
 * Date: 2025-02-12
 * Time: 10:36 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int days, dayStart;

	printf("Enter number of days in month: ");
	scanf("%d", &days);

	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &dayStart);

	days += dayStart;

	for (int i = 0, j = 1; ++i < days;)
	{
		if (dayStart > 1) {
			printf("   ");
			dayStart--;
		} else
			printf("%2d ", j++);
		if (i % 7 == 0 && i != 0)
			putchar('\n');
	}
	putchar('\n');

	exit(EXIT_SUCCESS);
}
