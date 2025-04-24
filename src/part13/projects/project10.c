/*
 *
 * Project 10.
 *
 * Task: Modify Programming Project 11 from Chapter 7 so that it includes the
 * following function:
 *
 * 	void reverse_name(char *name);
 *
 * The function expects name to point to a string containing a first name
 * followed by a last name. It modifies the string so that the last name comes
 * first, followed by a comma, a space, the first initial, and a period.
 * The original string may contain extra spaces before the first name, between
 * the first and last names, and after the last name.
 *
 * Date: 2025-04-24
 * Time: 02:35 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_L 80

void reverse_name(char *name);

int main(void) 
{
	char name[NAME_L];

	printf("Enter a first and last name: ");

	fgets(name, NAME_L, stdin);

	reverse_name(name);

	printf("%s\n", name);

	exit(EXIT_SUCCESS);
}

void reverse_name(char *name)
{
	char fname[NAME_L], lname[NAME_L];

	sscanf(name, "%s %s", fname, lname);

	fname[1] = '\0';

	strcpy(name, lname);
	strcat(name, ", ");
	strcat(name, strcat(fname, "."));
}
