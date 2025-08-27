/*
 *
 * Task:
 *		Let f be the following function. What will be the value
 *		of f(10) if f has never been called before? What will be
 *		the value of f(10) if f has been called five times previously?
 *
 *		int f(int i) {
 *			static int j = 0;
 *			return i * j++;
 *		}
 *
 * Date: 2025-08-27
 * Time: 11:35 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int f(int i) {
	static int j = 0;
	return i * j++;
}

int main(void) {
	printf("0 times called: %d\n", f(10));

	// called once previously and 4 more next
    for (int i = 0; i < 4; i++)
		f(10);
	printf("5 times called: %d\n", f(10));

	exit(EXIT_SUCCESS);
}
