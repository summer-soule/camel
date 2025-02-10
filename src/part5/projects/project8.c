/* 
 *
 * Project 8.
 *
 * Task: The following table shows the daily flights from one city to another:
 *
 * Departure time		Arrival time
 * 		8:00 a.m.		   10:16 a.m.
 * 		9:43 a.m.		   11:52 a.m.
 * 	   11:19 a.m.			1:31 p.m.
 *     12:47 p.m.			3:00 p.m.
 *		2:00 p.m.		    4:08 p.m.
 *		3:45 p.m.			5:55 p.m.
 *		7:00 p.m.			9:20 p.m.
 *		9:45 p.m.		   11:58 p.m.
 *
 * Write a program that asks user to enter a time (expressed in hours and
 * minutes, using the 24-hour clock). The program then displays the departure
 * and arrival times for the flight whose departure time is closest to that
 * entered by the user:
 *
 * Enter a 24-hour time: 13:15
 * Closest departure time is 12:47 p.m., arriving at 3:00 p.m.
 *
 * Hint: Convert the inout into a time expressed in minutes since midnight, and
 * compare it to the departure times, also expressed in minutes since midnight.
 * For example, 13:15 is 13 x 60 + 15 = 795 minutes since midnight, which is
 * closer to 12:47 p.m. (767 minutes since midnight) than to any of the other
 * departure times.
 *
 * Date: 2025-02-09
 * Time: 12:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hr, min;
	int timeAbs, depClosest, arrClosest;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hr, &min);

	timeAbs = 60 * hr + min;

	if (timeAbs < 60 * 8) {
		depClosest = 60 * 8;
		arrClosest = 60 * 10 + 16;
	}
	else if (timeAbs < 60 * 9 + 43) {
		depClosest = 60 * 9 + 43;
		arrClosest = 60 * 11 + 52;
	}
	else if (timeAbs < 60 * 11 + 19) {
		depClosest = 60 * 11 + 19;
		arrClosest = 60 * 13 + 31;
	}
	else if (timeAbs < 60 * 12 + 47) {
		depClosest = 60 * 12 + 47;
		arrClosest = 60 * 15;
	}
	else if (timeAbs < 60 * 14) {
		depClosest = 60 * 14;
		arrClosest = 60 * 16 + 8;
	}
	else if (timeAbs < 60 * 15 + 45) {
		depClosest = 60 * 15 + 45;
		arrClosest = 60 * 17 + 55;
	}
	else if (timeAbs < 60 * 19) {
		depClosest = 60 * 19;
		arrClosest = 60 * 21 + 20;
	}
	else {
		depClosest = 60 * 21 + 45;
		arrClosest = 60 * 23 + 58;
	}

	printf("Closest departure time is %d:%02d %s.m., arriving at %d:%02d %s.m.\n",
		depClosest / 60, depClosest % 60, (depClosest / 60) > 11 ? "p" : "a",
		arrClosest / 60, arrClosest % 60, (arrClosest / 60) > 11 ? "p" : "a");

	exit(EXIT_SUCCESS);
}
