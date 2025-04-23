/*
 *
 * Project 4.
 *
 * Task: Write a program named reverse.c that echoes its command-line
 * arguments in reverse order. Running the program by typing
 *
 * 	reverse void and null
 *
 * should produce the following output:
 *
 * 	null and void
 *
 * Date: 2025-04-23
 * Time: 10:52 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	argc--;
	while (argc > 0)
		printf("%s ", argv[argc--]);
	putchar('\n');

	exit(EXIT_SUCCESS);
}
