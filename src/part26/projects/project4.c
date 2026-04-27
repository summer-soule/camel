/*
 *
 * Project 4.
 *
 * Task:
 *		Write a program that prompts the user for a date
 *		(month, day, and year) and an integer n, then prints the
 *		date that's n days later.
 *
 * Date: 2026-04-27
 * Time: 08:01 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	char input[BUFSIZ];
	char output[50];
	struct tm t;
	int n = 0;

	printf("Enter date (month, day, and year): ");
	fgets(input, BUFSIZ, stdin);
	sscanf(input, "%d%d%d", &t.tm_mon, &t.tm_mday, &t.tm_year);
	t.tm_year -= 1900;

	printf("Enter days later: ");
	scanf("%d", &n);
	t.tm_mday += n;

	mktime(&t);
	strftime(output, 50, "%x", &t);

	printf("%s\n", output);

	exit(EXIT_SUCCESS);
}
