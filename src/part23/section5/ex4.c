/*
 *
 * Task:
 *		Using isalpha and isalnum, write a function that checks whether
 *		a string has the syntax of a C identifier (it consists of letters,
 *		digits, and underscores, with a letter or underscore at the beggining).
 *
 * Date: 2026-03-09
 * Time: 01:01 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

bool id_c(char *);

int main(void) {
	printf("test: %d\n", id_c("test"));
	printf("test0: %d\n", id_c("test0"));
	printf("test_: %d\n", id_c("test_"));
	printf("_test: %d\n", id_c("_test"));
	printf("0test: %d\n", id_c("0test"));
	printf("+test: %d\n", id_c("+test"));
	printf("test+: %d\n", id_c("test+"));

	exit(EXIT_SUCCESS);
}

bool id_c(char str[]) {
	if (!isalpha(str[0]) && str[0] != '_')
		return false;
	while (*str) {
		if (!isalnum(*str) && *str != '_')
			return false;
		str++;
	}
	return true;
}
