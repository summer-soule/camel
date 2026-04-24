/*
 *
 * Task:
 *		Explain the meaning of the following statement, assuming that
 *		value is a variable of type long int and p is a variable of
 *		type char *:
 *
 *		value = strtol(p, &p, 10);
 *
 * Date: 2026-04-24
 * Time: 05:05 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	long int value;

	char str1[] = "84l";
	char str2[] = "l84l";
	char str3[] = "0xFFl";

	char *p = NULL;

	// look for first printed characters from first argument and convert it to
	// long int number returning back with base from 3rd argument
	// set second argument pointer to the first character after converted
	// number in string
	// if no valid numerical string found - does nothing

	p = str1;
	printf("test string: %s\n", str1);
	value = strtol(p, &p, 10);
	printf("value: %ld\n", value);
    printf("p: %s\n", p);

	p = str2;
	printf("\ntest string: %s\n", str2);
	value = strtol(p, &p, 10);
	printf("value: %ld\n", value);
    printf("p: %s\n", p);

	p = str3;
	printf("\ntest string: %s\n", str3);
	value = strtol(p, &p, 10);
	printf("value: %ld\n", value);
    printf("p: %s\n", p);

	p = str3;
	printf("\ntest string: %s\n", str3);
	value = strtol(p, &p, 16);
	printf("value: %ld\n", value);
    printf("p: %s\n", p);

	exit(EXIT_SUCCESS);
}
