/*
 *
 * Project 5.
 *
 * Task: Write a program named sum.c that adds up its command-line arguments,
 * which are assumed to be integers. Running the program by typing
 *
 * 	sum 8 24 62
 *
 * should produce the following output:
 *
 * 	Total: 94
 *
 * Date: 2025-04-23
 * Time: 10:57 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int total = 0;
	int tmp = 0;

	for (int i = 1; i < argc; i++) {
		sscanf(argv[i], "%d", &tmp);
		total += tmp;
	}

	printf("Total: %d\n", total);

	exit(EXIT_SUCCESS);
}
