/* 
 *
 * Project 11.
 *
 * Task: Write a program that tales a first name and last name entered by the
 * user and displays the last name, a comma, and the first initial, followed
 * by a period:
 *
 * Enter a first and last name: Lloyd Fosdick
 * Fosdick, L.
 *
 * The user's input may contain extra spaces before the first name, between
 * the first and last names, and after the last name.
 *
 * Date: 2025-02-26
 * Time: 11:35 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) 
{
	char lName[100];
	char fName[100];

	printf("Enter a first and last name: ");

	scanf(" %99s %99s", lName, fName);

	printf("%s, %c.\n", fName, lName[0]);

	exit(EXIT_SUCCESS);
}
