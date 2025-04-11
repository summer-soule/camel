/*
 *
 * Task: Write a loop that prints the highest temperature in the temperatures
 * array (see Exercise 14). Use a pointer to visit each element of the row.
 *
 * Date: 2025-04-11
 * Time: 11:19 AM
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
	int temp_max = temperatures[0][0];

	if(search(temp_ptr, DAYS*HOURS, KEY)) {
		printf("temp value %d found.\n", KEY);
		temp_ptr = temperatures[0];
		while (temp_ptr < temperatures[DAYS-1] + HOURS)
			if(temp_max < *temp_ptr++)
				temp_max = *temp_ptr;
		printf("max temperature: %d\n", temp_max);
	}
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
