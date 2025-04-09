/*
 *
 * Task: Write the following function:
 * 	
 * 	void find_two_largest(int a[], int n, int *largest,
 * 						  int *second_largest);
 *
 * When passed an array a of length n, the fuction will search a for its
 * largest and second-largest elements, storing them in the variables pointed
 * by largest and second_largest, respectively.
 *
 * Date: 2025-04-09
 * Time: 03:43 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L	10

void
find_two_largest(int a[],
				 int n,
				 int *largest,
				 int *second_largest);

int main(void) {

	int arr[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int a, b;

	find_two_largest(arr, ARR_L, &a, &b);

	printf("Two largest numbers in array:\n");
	printf("[1] %d\n", a);
	printf("[2] %d\n", b);

	exit(EXIT_SUCCESS);
}

void
find_two_largest(int a[],
				 int n,
				 int *largest,
				 int *second_largest)
{
	*largest = 0;
	*second_largest = 0;

	for (int i = 0; i < ARR_L; i++)
		if (a[i] > *largest) {
			*second_largest = *largest;
			*largest = a[i];
		}
}
