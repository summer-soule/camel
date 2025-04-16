/*
 *
 * Task: Suppose that we call scanf as follows:
 *
 * 	scanf("%d%s%d", &i, s, &j);
 *
 * If the user enters 12abc34 56def78, what will be the values of i, s, and j
 * after the call? (Assume that i and j are int variables and s is an array
 * of characters.)
 *
 * A:
 * 	i: 12
 * 	s: abc34
 * 	j: 56
 *
 * Date: 2025-04-16
 * Time: 07:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define ARR_L 20

int main(void) {
	int i, j;
	char s[ARR_L];

	scanf("%d%s%d", &i, s, &j);

	printf("i: %d\n", i);
	printf("s: %s\n", s);
	printf("j: %d\n", j);

	exit(EXIT_SUCCESS);
}
