/*
 *
 * Task:
 *		Write the following function, assuming that the time
 *		structure contains three members: hours, minutes, and
 *		seconds (all of type int).
 *
 *		struct time split_time(long total_seconds);
 *
 *		total_seconds is a time represented as the number of seconds
 *		since midnight. The function returns a structure containing
 *		the equivalent time in hours (0-23), minutes (0-59), and
 *		seconds (0-59).
 *
 * Date: 2025-05-17
 * Time: 01:43 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

struct time {
	int hours, minutes, seconds;
};

struct time split_time(long total_seconds);

int main(void) {
    int seconds_input;
    
    printf("Enter total seconds: ");
    scanf("%d", &seconds_input);

    printf("%d seconds is %02d%02d.%02d in military format.\n",
           seconds_input,
           split_time(seconds_input).hours,
           split_time(seconds_input).minutes,
           split_time(seconds_input).seconds);
    
	exit(EXIT_SUCCESS);
}

struct time split_time(long total_seconds) {
    struct time time_return;
    time_return.hours = total_seconds / 3600;
    time_return.minutes = (total_seconds - time_return.hours * 3600) / 60;
    time_return.seconds = total_seconds % 60;
	return time_return;    
}
