/*
 *
 * Project 6.
 *
 * Task:
 *		Write programs that display the current date and time
 *		in each of the following formats. Use strftime to do
 *		all or most of the formatting.
 *
 *		(a) Sunday, June 3, 2007    05:48p
 *		(b) Sun, 3 Jun 07  17:48
 *		(c) 06/03/07  5:48:34 PM
 *
 * Date: 2026-04-27
 * Time: 09:13 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void) {
	char var_a[50];
	char var_b[50];
	char var_c[50];

	time_t now = time(NULL);
	struct tm *t = localtime(&now);

	strftime(var_a, 50, "%A, %B %e, %Y  %R", t);
	strcat(var_a, (t->tm_hour < 12) ? "a" : "p");
	printf("var_a: %s\n", var_a);

	strftime(var_b, 50, "%a, %e %b %y  %R", t);
	printf("var_b: %s\n", var_b);

	strftime(var_c, 50, "%D %k:%M:%S %p", t);
	printf("var_c: %s \n", var_c);

	exit(EXIT_SUCCESS);
}
