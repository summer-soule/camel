/*
 *
 * Task:
 *		Assume that str is a string that contains a "sales rank"
 *		immediately preceded by the # symbol (other characters may
 *		precede the # and/or follow the sales rank). A sales rank
 *		is a series of decimal digits possibly containing commas,
 *		such as the following examples:
 *
 *		989
 *		24,675
 *		1,162,620
 *
 *		Write a call of sscanf that extracts the sales rank
 *		(but not the # symbol) and stores it in a string
 *		variable named sales_rank.
 *
 * Date: 2025-12-19
 * Time: 07:18 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define STRINGS_C 3

int main(void) {
	char *istrings[STRINGS_C] = {
		"#989",
		"asd#24,675",
		"#1,162,620asd",
    };

	char ostrings[STRINGS_C][120];

	for (int i = 0; i < STRINGS_C; i++) {
		sscanf(istrings[i], "%*[^0123456789,]%[0123456789,]", ostrings[i]);
		puts(ostrings[i]);
	}

	exit(EXIT_SUCCESS);
}
