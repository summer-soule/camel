/*
 *
 * Task:
 *		Rewrite the max_int function so that, instead of passing
 *		the number of integers as the first argument, we must
 *		supply 0 as the last argument.
 *
 *		Hint: max_int must have at least one "normal" parameter,
 *		so you can't remove the parameter n. Instead, assume that
 *		it represents one of the number to be compared.
 *
 * Date: 2026-04-22
 * Time: 10:12 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int max_int(int n, ...);

int main(void) {
	printf("max_int(30, 10, 20): %d\n", max_int(30, 10, 20));

	exit(EXIT_SUCCESS);
}

int max_int(int n, ...) {
	va_list ap;
	int current, largest;

	va_start(ap, n);
	largest = n;

	while ((current = va_arg(ap, int)) != 0) {
		if (current > largest)
			largest = current;
	}

    va_end(ap);
	return largest;
}
