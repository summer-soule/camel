/*
 *
 * Task: Suppose that high, low, and middle are all pointer variables of the
 * same type, and that low and high point to elements of an array. Why is the
 * following statement illegal, and how could it be fixed?
 *
 * 	middle = (low + high) / 2;
 *
 * A: pVars low and high can't be added. Instead, we can subtract low from
 * high, then divide it by 2 and add the result to some pVar (low) in case
 * of pointer arithmetic like low+N.
 * 
 * Date: 2025-04-10
 * Time: 11:52 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L 10

int main(void) {
	int a[ARR_L] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *high = &a[9], *low = &a[0], *middle;

	middle = low + (high - low) / 2;

	printf("middle: %d\n", *middle);

	exit(EXIT_SUCCESS);
}
