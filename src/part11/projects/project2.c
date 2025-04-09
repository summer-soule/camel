/*
 *
 * Project 2.
 *
 * Task: Modify Programming Project 8 from Chapter 5 so that it includes the
 * following function:
 *
 * 	void find_closest_flight(int desired_time,
 * 							 int *departure_time,
 * 							 int *arrival_time);
 *
 * This function will find the flight whose departure time is closest to
 * desired_time (expressed in minutes since midnight). It will store the
 * departure and arrival times of this flight (also expressed in minutes since
 * midnight) in the variables pointed to by departure_time and arrival_time,
 * respectively.
 *
 * Date: 2025-04-09
 * Time: 06:34 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time,
						 int *departure_time,
						 int *arrival_time);

int main(void)
{
	int hr, min;
	int timeAbs, depClosest, arrClosest;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hr, &min);

	timeAbs = 60 * hr + min;

	find_closest_flight(timeAbs, &depClosest, &arrClosest);


	printf("Closest departure time is %d:%02d %s.m., arriving at %d:%02d %s.m.\n",
		depClosest / 60, depClosest % 60, (depClosest / 60) > 11 ? "p" : "a",
		arrClosest / 60, arrClosest % 60, (arrClosest / 60) > 11 ? "p" : "a");

	exit(EXIT_SUCCESS);
}

void find_closest_flight(int desired_time,
						 int *departure_time,
						 int *arrival_time)
{
	if (desired_time < 60 * 8) {
		*departure_time = 60 * 8;
		*arrival_time = 60 * 10 + 16;
	}
	else if (desired_time < 60 * 9 + 43) {
		*departure_time = 60 * 9 + 43;
		*arrival_time = 60 * 11 + 52;
	}
	else if (desired_time < 60 * 11 + 19) {
		*departure_time = 60 * 11 + 19;
		*arrival_time = 60 * 13 + 31;
	}
	else if (desired_time < 60 * 12 + 47) {
		*departure_time = 60 * 12 + 47;
		*arrival_time = 60 * 15;
	}
	else if (desired_time < 60 * 14) {
		*departure_time = 60 * 14;
		*arrival_time = 60 * 16 + 8;
	}
	else if (desired_time < 60 * 15 + 45) {
		*departure_time = 60 * 15 + 45;
		*arrival_time = 60 * 17 + 55;
	}
	else if (desired_time < 60 * 19) {
		*departure_time = 60 * 19;
		*arrival_time = 60 * 21 + 20;
	}
	else {
		*departure_time = 60 * 21 + 45;
		*arrival_time = 60 * 23 + 58;
	}
}
