/*
 *
 * Task: Write a function named censor that modifies a string by replacing
 * every occurrence of foo by xxx. For example, the string "food fool" would
 * become "xxxd xxxl". Make the function as short as possible without
 * sacrificing clarity.
 *
 * Date: 2025-04-17
 * Time: 05:03 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void censor(char [], int);

int main(void) {

	char test[] = "food fool";

	printf("test string: '%s'\n", test);
	censor(test, strlen(test));
	printf("censor on test: '%s'\n", test);

	exit(EXIT_SUCCESS);
}

void censor(char a[], int n)
{
	for (int i = 0; a[i] != '\0'; i++)
		if (a[i] == 'f' && a[i+1] == 'o' && a[i+2] == 'o')
			a[i] = a[i+1] = a[i+2] = 'x';
}
