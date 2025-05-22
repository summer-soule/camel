/*
 *
 * Project 5.
 *
 * Task:
 *		Modify Programming Project 8 from Chapter 5 so that the times
 *		are stored in a single array. The elements of the array will
 *		be structures, each containing a departure time and the
 *		corresponding arrival time. (Each time will be an integer,
 *		representing the number of minutes since midnight.) The program
 *		will use a loop to search the array for the departure time
 *		closest to the time entered by the user.
 *
 * Date: 2025-05-21
 * Time: 11:07 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define FLIGHT_AMOUNT 8

struct flight_time {
	int depClosest;
	int arrClosest;
};

const struct flight_time flight_time[FLIGHT_AMOUNT] = {
    {480, 616},
    {583, 712},
    {679, 811},
    {767, 900},
    {840, 968},
    {945, 1075},
    {1140, 1280},
    {1305, 1438},
};    

int main(void)
{
	int hr, min;
	int timeAbs;

    do {
		printf("Enter a 24-hour time: ");
		scanf("%d:%d", &hr, &min);
    } while (hr < 0 || hr > 23 || min < 0 || min >= 60);

	timeAbs = 60 * hr + min;

	for (int i = 0; i < FLIGHT_AMOUNT; i++) {
		if (timeAbs < flight_time[i].depClosest) {
            printf("Closest departure time is %d:%02d %s.m., arriving at "
                   "%d:%02d %s.m.\n",
                   flight_time[i].depClosest / 60,
                   flight_time[i].depClosest % 60,
                   (flight_time[i].depClosest / 60) > 11 ? "p" : "a",
                   flight_time[i].arrClosest / 60,
                   flight_time[i].arrClosest % 60,
                   (flight_time[i].arrClosest / 60) > 11 ? "p" : "a");
			exit(EXIT_SUCCESS);
        }
        if (timeAbs > flight_time[FLIGHT_AMOUNT - 1].depClosest) {
            printf("Closest departure time is %d:%02d %s.m., arriving at "
                   "%d:%02d %s.m.\n",
                   flight_time[0].depClosest / 60,
                   flight_time[0].depClosest % 60,
                   (flight_time[0].depClosest / 60) > 11 ? "p" : "a",
                   flight_time[0].arrClosest / 60,
                   flight_time[0].arrClosest % 60,
                   (flight_time[0].arrClosest / 60) > 11 ? "p" : "a");
            exit(EXIT_SUCCESS);
		}            
	}
}
