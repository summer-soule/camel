/*
 *
 * Task:
 *		Use strchr to write the following function:
 *
 *		int numchar(const char *s, char ch);
 *
 *		numchar returns the number of times the character
 *		ch occurs in the string s.
 *
 * Date: 2026-03-17
 * Time: 12:38 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int numchar(const char *s, char ch);

int main(void) {
	char *str = "abbcccddddeeeee";

	printf("looking for char 'd'...\n");
    printf("there is %d 'd' chars\n", numchar(str, 'd'));

	exit(EXIT_SUCCESS);
}

int numchar(const char *s, char ch) {
	int chtimes = 0;

    if ((s = strchr(s, ch))) chtimes++;
    else return 0;

	while ((s = strchr(s+1, ch))) chtimes++;

	return chtimes;
}
