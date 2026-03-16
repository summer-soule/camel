/*
 *
 * Task:
 *		Replace the test condition in the following if statement
 *		by a single call of strchr:
 *
 *		if (ch == 'a' || ch == 'b' || ch == 'c') ...
 *
 * Date: 2026-03-17
 * Time: 01:37 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char ch;
	printf("Enter one character: ");
	scanf("%c", &ch);

    printf("Entered character: %c\n", ch);

    if (strchr("abc", ch))
		printf("'a', 'b' or 'c' was found\n");
    else {
        printf("'a', 'b' or 'c' was not found\n");
	}

	exit(EXIT_SUCCESS);
}
