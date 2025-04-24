/*
 *
 * Project 17.
 *
 * Task: Modify Programming Project 2 from Chapter 12 so that it includes the
 * following function:
 *
 * 	bool is_palindrome(const char *message);
 *
 * The function returns true if the string pointed to by message is a
 * palindrome.
 *
 * Date: 2025-04-24
 * Time: 11:29 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>

#define MSG_L	50

bool is_palindrome(const char *message);

int main(void) {
	char message[MSG_L];

	printf("Enter a message: ");
	fgets(message, MSG_L, stdin);

	if (is_palindrome(message))
		printf("\nPalindrome\n");
	else
		printf("\nNot a palindrome\n");

	exit(EXIT_SUCCESS);
}

bool is_palindrome(const char *message)
{
	char message_tmp[MSG_L];
	char char_tmp;
	strcpy(message_tmp, message);

	char *p = message_tmp;
	char *q = message_tmp+strlen(message_tmp)-2;

	while (p < q) {
		char_tmp = *p;
		*p = *q;
		*q = char_tmp;
		p++; q--;
	}

	if (strcmp(message, message_tmp) == 0)
		return true;
	else
		return false;
}
