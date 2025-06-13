/*
 *
 * Task:
 * 		Write the following function. The call sum(g, i, j) should return
 * 		g(i) + ... + g(f).
 *
 * 		int sum(int (*j)(int), int start, int end);
 *
 * Date: 2025-06-13
 * Time: 04:18 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int (*f)(int), int start, int end);
int g(int n);

int main(void) {

	printf("sum[%d..%d]: %d\n", 1, 5, sum(g, 1, 5));

	exit(EXIT_SUCCESS);
}

int sum(int (*f)(int), int start, int end) {
	int result = 0;
	while (start <= end) {
		result += (*f)(start);
		start++;
	}
	return result;
}

int g(int n) {
	return n;
}
