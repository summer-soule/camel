/*
 *
 * Task:
 *		Replace the test condition in the following if statement
 *		by a single call of strstr:
 *
 *		if (strcmp(str, "foo") == 0 || strcmp(str, "bar") == ||
 *			strcmp(str, "baz") == 0) ...
 *
 *		Hint: Combine the string literals into a single string,
 *		separating them with a special character. Does your
 *		solution assume anything about the contents of str?
 *
 * Date: 2026-03-17
 * Time: 02:13 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char *str1 = "foo";
	char *str2 = "barrel";
	char *str3 = "baz inga";
	char *str4 = "honeydetected";

	if (strstr("foo#bar#baz", str1)) {
		printf("string located in '%s'\n", str1);
	} else {
		printf("none of strings in '%s' was found\n", str1);
	}

	if (strstr("foo#bar#baz", str2)) {
		printf("string located in '%s'\n", str2);
	} else {
		printf("none of strings in '%s' was found\n", str2);
	}

    if (strstr("foo#bar#baz", str3)) {
		printf("string located in '%s'\n", str3);
	} else {
		printf("none of strings in '%s' was found\n", str3);
	}

	if (strstr("foo#bar#baz", str4)) {
		printf("string located in %s\n", str4);
	} else {
		printf("none of strings in '%s' was found\n", str4);
	}

	exit(EXIT_SUCCESS);
}
