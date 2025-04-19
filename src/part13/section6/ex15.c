/*
 *
 * Task: Let f be the following function:
 *
 * 	int f(char *s, char *t)
 * 	{
 * 		char *p1, *p2;
 *
 * 		for (p1 = s; *p1; p1++) {
 * 			for (p2 = t; *p2; p2++)
 * 				if (*p1 == *p2) break;
 * 			if (*p2 == '\0') break;
 * 		}
 * 		return p1 - s;
 * 	}
 *
 * (a) What is the value of f("abcd", "babc")?
 * 		A: 3
 * (b) What is the value of f("abcd", "bcd")?
 * 		A: 0
 * (c) In general, what value does f return when passed two strings s and t?
 * 		A: 0
 *
 * Date: 2025-04-19
 * Time: 11:51 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int f(char *s, char *t);

int main(void) {

	printf("(a) f(\"abcd\", \"babc\"): %d\n", f("abcd", "babc"));
	printf("(b) f(\"abcd\", \"bcd\"): %d\n", f("abcd", "bcd"));
	printf("(c) f(\"asd\", \"zxc\"): %d\n", f("asd", "zxc"));

	exit(EXIT_SUCCESS);
}

// check if both strings contain same character
int f(char *s, char *t)
{
	char *p1, *p2;

	for (p1 = s; *p1; p1++) {
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2) break;
		if (*p2 == '\0') break;
	}
	return p1 - s;
}
