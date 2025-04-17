/*
 *
 * Task:
 * (a) Write a function named capitalize that capitalizes all letters in its
 *     argument. The argument will be a null-terminated string containing
 *     arbitrary characters, not just letters. Use array subscripting to access
 *     the characters in the string.
 *
 *     Hint: Use the toupper function to convert each character to upper-case.
 *
 * (b) Rewrite the capitalize function, this time using pointer arithmetic
 *     to access the characters in the string.
 *
 * Date: 2025-04-17
 * Time: 03:54 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define ARR_L 50

void capitalize_a(char a[], int n);
void capitalize_b(char a[], int n);

int main(void) {
	char arr_a[ARR_L] = "abcd";
	char arr_b[ARR_L] = "efgh";

	capitalize_a(arr_a, ARR_L);
	printf("string: '%s'\n", arr_a);

	capitalize_b(arr_b, ARR_L);
	printf("string: '%s'\n", arr_b);

	exit(EXIT_SUCCESS);
}

void capitalize_a(char a[], int n)
{
	int i = 0;
	while (a[i]) {
		a[i] = toupper(a[i]);
		i++;
	}
}

void capitalize_b(char a[], int n)
{
	char *p = a;
	while (*p) {
		*p = toupper(*p);
		p++;
	}
}
