/*
 *
 * Task: Write the following function:
 *
 * 	void split_time(long total_sec, int *hr, int *min, int *sec);
 *
 * total_sec is the time represented as the number of seconds since midnight,
 * hr, min, and sec are pointers to variables in which the function will store
 * the equivalent time in hours (0-23), minutes (0-59), and seconds (0-59),
 * respectively.
 *
 * Date: 2025-04-09
 * Time: 02:12 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void split_time(long total_sec, int *hr, int *min, int *sec);

int main(void) {
	int hours_1, hours_2, hours_3;
	int min_1, min_2, min_3;
	int sec_1, sec_2, sec_3;

	long time_total = 0;

	time_total = time(NULL) % 86400;
	split_time(time_total, &hours_1, &min_1, &sec_1);
	
	time_total = time(NULL) % 86400;
	split_time(time_total, &hours_2, &min_2, &sec_2);
	
	time_total = time(NULL) % 86400;
	split_time(time_total, &hours_3, &min_3, &sec_3);

	printf("[1] %dhr, %dmin, %dsec.\n", hours_1, min_1, sec_1);
	printf("[2] %dhr, %dmin, %dsec.\n", hours_2, min_2, sec_2);
	printf("[3] %dhr, %dmin, %dsec.\n", hours_3, min_3, sec_3);

	exit(EXIT_SUCCESS);
}

void split_time(long total_sec, int *hr, int *min, int *sec)
{
	*hr = total_sec / 3600;
	*min = total_sec % 3600 / 60;
	*sec = total_sec % 60; 
	sleep(1);
}
