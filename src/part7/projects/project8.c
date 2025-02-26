/* 
 *
 * Project 8.
 *
 * Task: Modify Programming Project 8 from Chapter 5 so that the user enters
 * a time using the 12-hour clock. The input will have the form hours:minutes
 * followed by either A, P, AM, or PM (either lower-case or upper-case).
 * White space is allowed (but not required) between the numerical time and
 * the AM/PM indicator. Examples of valid input:
 *
 * 1:15P
 * 1:15PM
 * 1:15p
 * 1:15pm
 * 1:15 P
 * 1:15 PM
 * 1:15 p
 * 1:15 pm
 *
 * Date: 2025-02-25
 * Time: 8:57 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) 
{
	char ch;
	int hr, min;
	int timeAbs, depClosest, arrClosest;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d %c", &hr, &min, &ch);

	switch(toupper(ch)) {
		case 'A':
			timeAbs = 60 * hr + min;
			break;
		case 'P':
			timeAbs = hr < 12 ? (60 * (hr + 12) + min) : (60 * hr + min);
			break;
		default:
			printf("Invalid time format!\n");
			exit(EXIT_SUCCESS);
	}

	printf("%d\n", timeAbs);

	if (timeAbs < 60 * 8 || timeAbs > 60 * 21 + 45) {
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
