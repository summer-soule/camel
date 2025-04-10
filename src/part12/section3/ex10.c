/*
 *
 * Task: Modify the find_middle function of Section 11.5 so that it uses
 * pointer arithmetic to calculate the return value.
 *
 * Date: 2025-04-10
 * Time: 09:19 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L	11

int *find_middle(int a[], int n);

int main(void) {
	int arr[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	printf("middle: %d\n", *find_middle(arr, ARR_L));

	exit(EXIT_SUCCESS);
}

int *find_middle(int a[], int n)
{
	return a + (n/2);
}
