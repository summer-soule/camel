/*
 *
 * Project 5.
 *
 * Task:
 *		Write a program that prompts the user to enter two dates,
 *		then prints the difference between them, measured in days.
 *
 *		Hint: Use the mktime and difftime functions.
 *
 * Date: 2026-04-27
 * Time: 08:48 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	char input1[BUFSIZ];
	char input2[BUFSIZ];

	time_t sec1, sec2;
	struct tm t1, t2;

	printf("Enter first date (month, day, and year): ");
	fgets(input1, BUFSIZ, stdin);
	sscanf(input1, "%d%d%d", &t1.tm_mon, &t1.tm_mday, &t1.tm_year);

	printf("Enter second date (month, day, and year): ");
	fgets(input2, BUFSIZ, stdin);
	sscanf(input2, "%d%d%d", &t2.tm_mon, &t2.tm_mday, &t2.tm_year);

	sec1 = mktime(&t1);
	sec2 = mktime(&t2);

	printf("Difference: %d days\n",
		   (int) ((sec2 > sec1)
				  ? difftime(sec2, sec1)
				  : difftime(sec1, sec2))
		   / 60 / 60 / 24);

	exit(EXIT_SUCCESS);
}
