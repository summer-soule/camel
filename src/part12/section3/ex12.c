/*
 *
 * Task: Write the following function:
 *
 * 	void find_two_largest(const int *a, int n, int *largest,
 *						  int *second_largest);
 *
 * a points to an array of length n. The function searches the array for its
 * largest and second-largest elements, storing them in the variables pointed
 * by largest and second_largest, respectively. Use pointer arithmetic -
 * not subscripting - to visit array elements.
 *
 * Date: 2025-04-10
 * Time: 09:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L	10

void
find_two_largest(const int *a,
					  int n,
					  int *largest,
					  int *second_largest);

int main(void) {
	const int arr[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int largest = 0;
	int second_largest = 0;

	find_two_largest(arr, ARR_L-1, &largest, &second_largest);

	printf("largest: %d\nsecond largest: %d\n", largest, second_largest);

	exit(EXIT_SUCCESS);
}

void 
find_two_largest(const int *a,
					  int n,
					  int *largest,
					  int *second_largest)
{
	const int *i = a;
	while (*i++ < n)
		if (*i > *largest) {
			*second_largest = *largest;
			*largest = *i;
		}
}
