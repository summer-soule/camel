/*
 *
 * Task:
 * 		In previous chapters, we've used the scanf format string " %c"
 * 		when we wanted to skip white-space characters and read a nonblank
 * 		character. Some programmers use "%ls" instead. Are the two techniques
 * 		equivalent? If not, what are the differences?
 *
 * Answer:
 * 		1. " %c" specifier skips white-space characters and reads only
 * 		   first character into char variable.
 * 		2. "%ls" specifier intended to work with strings of wchar_t (wide)
 * 		   characters.
 *
 *		As result, there is two big differences: char vs wchar_t types
 *		and single vs string expected respectively.
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
	char string1[120];
	wchar_t string2[120];

	printf("test string: '%s'\n", teststring);

	sscanf(teststring, " %c", string1);
	printf("%s\n", string1);

	sscanf(teststring, "%ls", string2);
	printf("%ls\n", string2);

	exit(EXIT_SUCCESS);
}
