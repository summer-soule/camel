/*
 *
 * Task:
 *		Write a function that, when passed a year, returns a time_t
 *		value representing 12:00 a.m. on the first day of that year.
 *
 * Date: 2026-04-26
 * Time: 09:24 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t first_day(int year);

int main(void) {
	time_t tmp = first_day(2026);
	printf("first_day: %ld\n", tmp);
	printf("first_day string: %s", ctime(&tmp));

	exit(EXIT_SUCCESS);
}

time_t first_day(int year) {
    return mktime(&(struct tm){
        .tm_year = year - 1900,
        .tm_mon = 0,
        .tm_mday = 1,
        .tm_hour = 0,
		.tm_min = 0,
		.tm_sec = 0
    });
}
