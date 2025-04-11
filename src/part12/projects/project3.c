/*
 *
 * Project 3.
 *
 * Task: Simplify Programming Project 1(b) by taking advantage of the fact that
 * an array name can be used as a pointer.
 *
 * S: already done
 *
 * Date: 2025-04-11
 * Time: 05:37 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define MSG_L	50

int main(void) {
	char message[MSG_L];
	char *p = message;

	printf("Enter a message: ");
	while (p < message+MSG_L && *p++ != '\n') *p = getchar();

	printf("Reversal is: ");
	while (p >= message)
		if (*p != '\n' && *p != '\0') putchar(*p--);
		else p--;
	putchar('\n');

	exit(EXIT_SUCCESS);
}
