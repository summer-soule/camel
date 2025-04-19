/*
 *
 * Task: Write the following function:
 *
 * 	bool test_extension(const char *file_name, const char *extension);
 *
 * file_name points to a string containing file name. The function should
 * return true if the file's extension matches the string pointed to by
 * extension, ignoring the case of letters. For example, the call
 * test_extension("memo.txt", "TXT") would return true. Incorporate the
 * "search for the end of a string" idiom into your function.
 *
 * Hint: Use the toupper function to convert characters to upper-case before
 * comparing them.
 *
 * Date: 2025-04-19
 * Time: 12:09 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension);

int main(void) {

	printf("'memo.TXT' and 'TXT': %d\n", test_extension("memo.TXT", "TXT"));
	printf("'memo.TXT' and 'c': %d\n", test_extension("memo.TXT", "c"));

	exit(EXIT_SUCCESS);
}

bool test_extension(const char *file_name, const char *extension)
{
	char file_ext[20];
	char *p = file_ext;

	while (*file_name)
		if (*file_name++ == '.')
			strcpy(file_ext, file_name);

	do {
		if (toupper(*p) != toupper(*extension))
			return false;
	} while (*p++ && *extension++);

	return true;
}
