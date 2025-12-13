/*
 *
 * Task:
 * 		In previous chapters, we've used the scanf format string " %c"
 * 		when we wanted to skip white-space characters and read a nonblank
 * 		character. Some programmers use "%1s" instead. Are the two techniques
 * 		equivalent? If not, what are the differences?
 *
 * Answer:
 *		1. " %c" stores first nonblank character.
 *		2. "%1s" stores first nonblank character and adds null character after.
 *
 * Date: 2025-12-10
 * Time: 10:23 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <wchar.h>

int main(void) {
	char *teststring = "    test";
	char c;
	char string2[5];

	printf("test string: '%s'\n", teststring);

	sscanf(teststring, " %c", &c);
	printf("%c\n", c);

	sscanf(teststring, "%1s", string2);
	printf("%s\n", string2);

	exit(EXIT_SUCCESS);
}
