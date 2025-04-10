/*
 *
 * Task: Write the following function:
 *
 * 	bool search(const int a[], int n, int key);
 *
 * a is an array to be searched, n is the number of elements in the array,
 * and key is the search key. search should return true if key matches some
 * element of a, and false if it doesn't. Use pointer arithmetic - not
 * subscripting - to visit array elements.
 *
 * Date: 2025-04-10
 * Time: 06:09 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ARR_L 10

bool search(const int a[], int n, int key);

int main(void) {
	int arr[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int input;

	printf("Enter key: ");
	scanf("%d", &input);

	if (search(arr, ARR_L, input))
		printf("key found!\n");
	else
		printf("key not found ):\n");

	exit(EXIT_SUCCESS);
}

bool search(const int a[], int n, int key)
{
	for (const int *p = a; p < a + n; p++)
		if(*p == key)
			return true;
	return false;
}
