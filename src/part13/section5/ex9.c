/*
 *
 * Task: What will be the value of the string s1 after following statements
 * have been executed?
 *
 * 	strcpy(s1, "computer");
 * 	strcpy(s2, "science");
 * 	if (strcmp(s1, s2) < 0)
 * 		strcat(s1, s2);
 * 	else
 * 		strcat(s2, s1);
 * 	s1[strlen(s1)-6] = '\0';
 *
 * A: 'computers'
 *
 * Date: 2025-04-18
 * Time: 01:53 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char s1[20];
	char s2[20];

	strcpy(s1, "computer");
	strcpy(s2, "science");
	if (strcmp(s1, s2) < 0)
		strcat(s1, s2);
	else
		strcat(s2, s1);
	s1[strlen(s1)-6] = '\0';

	printf("s1: '%s'\n", s1);

	exit(EXIT_SUCCESS);
}
