/*
 *
 * Task:
 *		Write the following function:
 *
 *		int *create_array(int n, int initial_value);
 *
 *		The function should return a pointer to a dynamically allocated
 *		int array with n members, each of which is initialized to
 *		initial_value. The return value should be NULL if the array
 *		can't be allocated.
 *
 * Date: 2025-05-28
 * Time: 02:36 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int *create_array(int n, int initial_value);

int main(void) {
	int n, init_value;
	int *arr;

	printf("Enter size of array: ");
	scanf("%d", &n);

	printf("\nEnter initial value: ");
	scanf("%d", &init_value);

	arr = create_array(n, init_value);

	for (int i = 0; i < n; i++)
		printf("arr[%d]: %d\n", i, *arr++);

	exit(EXIT_SUCCESS);
}

int *create_array(int n, int initial_value) {
	int *p;
	if ((p = malloc(n * sizeof(int))) != NULL) {
		for (int i = 0; i < n; i++)
			p[i] = initial_value;
		return p;
	}
	return NULL;
}
