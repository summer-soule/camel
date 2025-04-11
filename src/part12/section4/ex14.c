/*
 *
 * Task: Assume that the following array contains a week's worth of hourly
 * temperature readings, with each row containing the reading for one day:
 *
 *  int temperatures[7][24];
 *
 * Write a statement that uses the search function (see Exercise 7) to search
 * the entire temperatures array for the value 32.
 *
 * Date: 2025-04-11
 * Time: 10:02 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DAYS	7
#define HOURS	24
#define KEY		32

bool search(int a[], int n, int key);

int main(void) {
	int temperatures[DAYS][HOURS] = {{32}, {0}, {0}, {0}, {0}, {0}, {0}};
	int *temp_ptr = temperatures[0];

	if(search(temp_ptr, DAYS*HOURS, KEY))
		printf("temp value %d found.\n", KEY);
	else
		printf("temp value %d not found.\n", KEY);

	exit(EXIT_SUCCESS);
}

bool search(int a[], int n, int key)
{
	for (const int *p = a; p < a + n; p++)
		if(*p == key)
			return true;
	return false;
}
