/*
 *
 * Project 4.
 *
 * Task:
 *		Write a program that prompts the user to enter a series
 *		of words separated by single spaces, then prints the words
 *		in reverse order. Read the input as a string, and then use
 *		strtok to break it into words.
 *
 * Date: 2026-03-23
 * Time: 01:46 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[BUFSIZ];
	char *p;
	size_t str_len = 0;

	printf("Enter series of words separated by single spaces:\n");
	fgets(str, BUFSIZ, stdin);

    char *newline = strrchr(str, '\n');
	if (newline) *newline = '\0';

	str_len = strlen(str);
	printf("str_len: %lu\n", str_len);

	p = strtok(str, " ");
    while (p) p = strtok(NULL, " ");

    p = str+str_len;

	while (p != str) {
		if (*p == '\0' && p != str+str_len) {
			printf("%s", p+1);
			putchar(' ');
		}
		p--;
	}
	printf("%s\n", p);

	exit(EXIT_SUCCESS);
}
