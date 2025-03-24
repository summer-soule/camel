/*
 *
 * Project 13.
 *
 * Task: Modify Programming Project 11 from Chapter 7 so that the program
 * labels its output:
 *
 * Enter a first and last name: Lloyd Fosdick
 * You entered the name: Fosdick, L.
 *
 * The program will need to store the last name (but not the first name) in an
 * array of characters until it can be printed. You may assume that the last
 * name is no more than 20 characters long.
 *
 * Date: 2025-03-25
 * Time: 01:09 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char lName[20] = {0};
	char ch, firstChar;

	printf("Enter a first and last name: ");

	// skip space chars and get first nonempty
	while ((ch = getchar()) == ' ')
		;

	// store first name initial
	firstChar = ch;

	// skip first name
	while ((ch = getchar()) != ' ')
		;

	// store lastname
	for (int i = 0; (ch = getchar()) != '\n'; i++)
		lName[i] = ch;

	printf("You entered the name: ");
	for (int i = 0; lName[i] != '\0'; i++)
		putchar(lName[i]);
	printf(", %c.\n", firstChar);

	exit(EXIT_SUCCESS);
}
