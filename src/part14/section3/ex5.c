/*
 *
 * Task: Let TOUPPER be the following macro:
 *
 * 	#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
 *
 * Let s be a string and let i be a int variable. Show the output produced by
 * each of the following program fragments.
 *
 * 	(a) strcpy(s, "abcd");
 * 		i = 0;
 * 		putchar(TOUPPER(s[++i]));
 * 	(b) strcpy(s, "0123");
 * 		i = 0;
 * 		putchar(TOUPPER(s[++i]));
 *
 * Date: 2025-04-28
 * Time: 06:05 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define S_L 50
#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))

int main(void) {
	char s[S_L];
	int i;

	// (a)
	strcpy(s, "abcd");
	i = 0;
	putchar(TOUPPER(s[++i]));

	// (b)
	strcpy(s, "0123");
	i = 0;
	putchar(TOUPPER(s[++i]));

	putchar('\n');

	exit(EXIT_SUCCESS);
}
