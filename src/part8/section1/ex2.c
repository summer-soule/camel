/*
 *
 * Task: The Q&A section shows how to use a letter as an array subscript.
 * Describe how to use a digit (in character form) as a subscript.
 *
 * A: a[ch - '0']
 *
 * Date: 2025-03-17
 * Time: 11:24 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char ch;

	printf("Enter a digit: ");
	scanf("%c", &ch);

	printf("ch is %lu bytes!\n", sizeof(ch));
	printf("a[ch - '0'] = %d\n", a[ch - '0']);

	exit(EXIT_SUCCESS);
}
