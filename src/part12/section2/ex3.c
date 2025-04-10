/*
 *
 * Task: What will be the contents of the a array after the following
 * statements are executed?
 *
 *  #define N 10
 *
 *  int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
 *  int *p = &a[0], *q = &a[N-1], temp;
 *
 *  while (p < q) {
 *  	temp = *p;
 *  	*p++ = *q;
 *  	*q-- = temp;
 *  }
 *
 * A: content of a array will be reversed
 *
 * Date: 2025-04-10
 * Time: 01:54 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main(void) {
	int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = &a[0], *q = &a[N-1], temp;

	while (p < q) {
		temp = *p;
		*p++ = *q;
		*q-- = temp;
	}

	for (p = a; p < a + N; p++)
		printf("a[%d]: %d\n", (int)(p-a), *p);

	exit(EXIT_SUCCESS);
}
