/*
 *
 * Project 10.
 *
 * Task: Modify Programming Project 8 from Chapter 5 so that the departure
 * times are stored in an array and the arrival times are stored in a second
 * array. (The times are integers, representing the number of minutes since
 * midnight.) The program will use a loop to search the array of departure
 * times for the one closest to the time entered by the user.
 *
 * Date: 2025-03-23
 * Time: 03:52 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hr, min;
	int timeAbs, depClosest, arrClosest;

	int departure[8] = { 480, 583, 679, 767, 840, 945, 1140, 1305 };
	int arrival[8] = { 616, 712, 811, 900, 968, 1075, 1280, 1438 };

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hr, &min);

	timeAbs = 60 * hr + min;

	for (int i = 0; i < 8; i++) {
		if (timeAbs < departure[i] || timeAbs > departure[7]) {
			depClosest = departure[i];
			arrClosest = arrival[i];
			break;
		}
	}

	printf("Closest departure time is %d:%02d %s.m., arriving at %d:%02d %s.m.\n",
		depClosest / 60, depClosest % 60, (depClosest / 60) > 11 ? "p" : "a",
		arrClosest / 60, arrClosest % 60, (arrClosest / 60) > 11 ? "p" : "a");

	exit(EXIT_SUCCESS);
}
