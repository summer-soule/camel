/*
 *
 * Task:
 *		Convert the following calls of atoi, atol, and atoll into
 *		calls of strtol, strtol, and strtoll, resepctively.
 *
 *		(a) atoi(str)
 *		(b) atol(str)
 *		(c) atoll(str)
 *
 * Date: 2026-04-25
 * Time: 08:26 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[] = "123test";
	char *p = NULL;

	printf("atoi(str): '%d'\n", atoi(str));
	printf("atol(str): '%ld'\n", atol(str));
	printf("atoll(str): '%lld'\n", atoll(str));

	printf("strtol(str): '%ld'\tp: '%s'\n", strtol(str, &p, 10), p);
	printf("strtol(str): '%ld'\tp: '%s'\n", strtol(str, &p, 10), p);
	printf("strtoll(str): '%lld'\tp: '%s'\n", strtoll(str, &p, 10), p);

	exit(EXIT_SUCCESS);
}
