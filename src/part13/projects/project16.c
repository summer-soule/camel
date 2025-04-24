/*
 *
 * Project 16.
 *
 * Task: Modify Programming Project 1 from Chapter 12 so that it includes the
 * following function:
 *
 * 	void reverse(char *message);
 *
 * The function reverses the string pointed to by message.
 *
 * Hint: Use two pointers, one initially pointing to the first character of the
 * string and the other initially pointing to the last character. Have the
 * function reverse these characters and then move the pointers toward each
 * other, repeating the process until pointers meet.
 *
 * Date: 2025-04-24
 * Time: 10:58 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MSG_L	50

void reverse(char *message);

int main(void) {
	char message[MSG_L];

	printf("Enter a message: ");
	fgets(message, MSG_L, stdin);

	reverse(message);
	printf("Reversal is: %s", message);

	exit(EXIT_SUCCESS);
}

void reverse(char *message)
{
	char *p, *q;
	char tmp;
	p = message;
	q = message+(strlen(message)-2);

	while (p < q) {
		tmp = *p;
		*p = *q;
		*q = tmp;
		p++; q--;
	}

}
