/*
 *
 * Task:
 *		Write a call of memset that replaces the last n characters
 *		in a null-terminated string s with ! characters.
 *
 * Date: 2026-03-17
 * Time: 03:24 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[20] = "test string...";
	size_t n = 3;

	printf("string before memset: '%s'\n", str);
    memset(str+(strlen(str)-n), '!', n);
	printf("string after memset: '%s'\n", str);

	exit(EXIT_SUCCESS);
}
