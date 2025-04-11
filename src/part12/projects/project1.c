/*
 *
 * Project 1.
 *
 * Task:
 * (a) Write a program that reads a message, then prints the reversal of the
 * message:
 *
 * 	Enter a message: Don't get mad, get even.
 * 	Reversal is: .neve teg ,dam teg t'noD
 *
 * Hint: Read the message one character at a time (using getchar) and store
 * the characters in an array. Stop reading when the array is full or the
 * character read is '\n'.
 *
 * (b) Revise the program to use a pointer instead of an integer to keep track
 * of the current position in the array.
 *
 * Date: 2025-04-11
 * Time: 12:50 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MSG_L	50

int main(void) {
	char message[MSG_L];
	char *p = message;

	printf("Enter a message: ");
	while (p < message+MSG_L && *p++ != '\n') *p = getchar();

	printf("Reversal is: ");
	while (p >= message)
		if (*p != '\n' && *p != '\0') putchar(*p--);
		else p--;
	putchar('\n');

	exit(EXIT_SUCCESS);
}
