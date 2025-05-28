/*
 *
 * Task:
 *		Write a function named duplicate that uses dynamic storage
 *		allocation to create a copy of a string. For example, the call
 *
 *		p = duplicate(str);
 *
 *		would allocate space for a string of the same length as str,
 *		copy the contents of str into the new string, and return a
 *		pointer to it. Have duplicate return a null pointer if the
 *		memory allocation fails.
 *
 * Date: 2025-05-28
 * Time: 01:28 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *duplicate(char *str);

int main(void) {
	char str1[] = "test";
	char *q;

	printf("str1: contains string \"%s\" of %lu bytes\n", str1, sizeof(str1));

	if ((q = duplicate(str1)) != NULL)
		printf("*q: contains string \"%s\" of %lu bytes\n", q, strlen(q)+1);

	exit(EXIT_SUCCESS);
}

char *duplicate(char *str) {
	char *p;
	if ((p = malloc(sizeof(str))) != NULL) {
		memcpy(p, str, (char) sizeof(str));
		return p;
	}
	return NULL;
}
