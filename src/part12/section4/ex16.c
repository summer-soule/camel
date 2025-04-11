/*
 *
 * Task: Write a loop that prints the highest temperature in temperatures
 * array (see Exercise 14) for each day of the week. The loop body should call
 * the find_largest function, passing it one row of a the array at a time.
 *
 * Date: 2025-04-11
 * Time: 11:23 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define DAYS	7
#define HOURS	24
#define KEY		32

bool search(int a[], int n, int key);
int *find_largest(int a[], int n);

int main(void) {
	int temperatures[DAYS][HOURS] = {{32}, {0}, {0}, {0}, {0}, {0},
		{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17,
		18, 19, 20, 21, 22, 23}};
	int *temp_ptr = temperatures[0];

	if(search(temp_ptr, DAYS*HOURS, KEY))
		printf("temp value %d found.\n", KEY);
	else
		printf("temp value %d not found.\n", KEY);

	int i = 0;
	int *q;

	while (i < DAYS) {
		q = temperatures[i];
		printf("largest at day %d: %d\n", i, *find_largest(q, HOURS-1));
		i++;
	}

	exit(EXIT_SUCCESS);
}

bool search(int a[], int n, int key)
{
	for (const int *p = a; p < a + n; p++)
		if(*p == key)
			return true;
	return false;
}

int *find_largest(int a[], int n)
{
	int *max = a, i = 0;

	while (i++ < n)
		if (*(a+i) > *max)
			max = a+i;

	return max;
}
