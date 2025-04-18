/*
 *
 * Task: Suppose that str is an array of characters. Which one of the following
 * statements is not equivalent to the other three?
 *
 *	(a) *str = 0;
 *	(b) str[0] = '\0';
 *	(c) strcpy(str, "");
 *	(d) strcat(str, "");
 *
 * A: (d) is not equivalent, because strcat add second argument to first.
 *
 * Date: 2025-04-18
 * Time: 01:24 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char arr_a[10] = "123";
	char arr_b[10] = "123";
	char arr_c[10] = "123";
	char arr_d[10] = "123";

	*arr_a = 0;
	printf("(a): '%s'\n", arr_a);

	arr_b[0] = '\0';
	printf("(b): '%s'\n", arr_b);

	strcpy(arr_c, "");
	printf("(c): '%s'\n", arr_c);

	strcat(arr_d, "");
	printf("(d): '%s'\n", arr_d);

	exit(EXIT_SUCCESS);
}
