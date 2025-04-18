/*
 *
 * Task: Write the following function:
 *
 * 	void get_extension(const char *file_name, char *extension);
 *
 * file_name points to a string containing a file name. The function should
 * store the extension on the file name in the string pointed to by extension.
 * For example, if the file name is "memo.txt", the function will store "txt"
 * in the string pointed to by extension. If the file name doesn't have an
 * extension, the function should store an empty string (a single null char)
 * in the string pointed to by extension. Keep the function as simple as
 * possible by having it use the strlen and strcpy functions.
 *
 * Date: 2025-04-18
 * Time: 03:30 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void) {
	char arr[10] = "memo.txt";
	char ext[10];

	printf("test string: '%s'\n", arr);

	get_extension(arr, ext);
	printf("extention: '%s'\n", ext);

	exit(EXIT_SUCCESS);
}

void get_extension(const char *file_name, char *extension)
{
	while(*file_name)
		if (*file_name++ == '.') {
			strcpy(extension, file_name);
			return;
		}
	strcpy(extension, "");
}
