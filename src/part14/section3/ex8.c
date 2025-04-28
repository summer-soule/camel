/*
 *
 * Task: Suppose we want a macro that expands into a string containing the
 * 		 current line number and file name. In other words, we'd like to write
 *
 * 			const char *str = LINE_FILE;
 *
 * 		 and have it expand into
 *
 * 			const char *str = "Line 10 of file foo.c";
 *
 * 		 where foo.c is the file containing the program and 10 is the line on
 * 		 which the invocation of LINE_FILE appears.
 *
 * 		 Warning: This exercise is for experts only. Be sure to read the Q&A
 * 		 		  section carefully before attempting!
 *
 * Date: 2025-04-28
 * Time: 10:16 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define STRINGIZE(x) #x
#define EXPAND(x) STRINGIZE(x)
#define LINE_FILE ("Line " EXPAND(__LINE__) " of file " __FILE__)

int main(void) {
	const char *str = LINE_FILE;
	printf("%s\n", str);

	exit(EXIT_SUCCESS);
}
