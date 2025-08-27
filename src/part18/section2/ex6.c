/*
 *
 * Task:
 *		The following function is supposed to print an error message.
 *		Each message is preceded by an integer, indicating the number
 *		of times the function has been called. Unfortunately, the
 *		function always displays 1 as the number of the error
 *		message. Locate the error and show how to fix it without
 *		making any changes outside the function.
 *
 *		void print_error(const char *message) {
 *			int n = 1;
 *			printf("Error %d: %s\n", n++, message);
 *		}
 *
 * A:
 *		Make variable i static.
 *
 * Date: 2025-08-27
 * Time: 12:19 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void print_error(const char *);

int main(void) {
	for (int i = 0; i < 10; i++)
		print_error("test error");

	exit(EXIT_SUCCESS);
}

void print_error(const char *message) {
	static int n = 1;
	printf("Error %d: %s\n", n++, message);
}
