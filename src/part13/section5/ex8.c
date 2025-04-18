/*
 *
 * Task: What will be the value of the string str after the following
 * statements have been executed?
 *
 * 	strcpy(str, "tire-bouchon");
 * 	strcpy($str[4], "d-or-wi");
 * 	strcat(str, "red?");
 *
 * A: 'tired-or-wired?'
 *
 * Date: 2025-04-18
 * Time: 01:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char str[20];

	strcpy(str, "tire-bouchon");
	strcpy(&str[4], "d-or-wi");
	strcat(str, "red?");

	printf("str: '%s'\n", str);

	exit(EXIT_SUCCESS);
}
