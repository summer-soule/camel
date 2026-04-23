/*
 *
 * Task:
 *		Write the following function:
 *
 *		char *vstrcat(const char *first, ...);
 *
 *		All arguments of vstrcat are assumed to be strings, except
 *		for the last argument, which must be a null pointer
 *		(cast to char * type). The function returns a pointer
 *		to a dynamically allocated string containing the concatenation
 *		of the arguments. vstrcat should return a null pointer if not
 *		enough memory is available.
 *
 *		Hint: Have vstrcat go through the arguments twice: once to
 *		determine the amount of memory required for the returned
 *		string and once to copy the arguments into the string.
 *
 * Date: 2026-04-23
 * Time: 10:07 AM
 *
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

char *vstrcat(const char *first, ...);

int main(void) {
	printf("test: %s\n", vstrcat("123", "456", "789", (char *)NULL));

	exit(EXIT_SUCCESS);
}

// NEED TO BE OPTIMISED!!!
char *vstrcat(const char *first, ...) {
	va_list ap;
	char *result = NULL;
	const char *p = NULL;
	char *q = NULL;
	size_t mem = 0;

	// get size of memory needed and allocate memory
	va_start(ap, first);
	p = first;
	while (*p != '\0') {
		mem++;
		p++;
	}
	p = va_arg(ap, char *);
	while (p) {
		while (*p != '\0') {
			mem++;
			p++;
		}
		p = va_arg(ap, char *);
	}
	if ((result = malloc(sizeof(char) * mem + 1)) == NULL) {
		va_end(ap);
		return NULL;
    }
	va_end(ap);

	// copy arguments to char *result
	va_start(ap, first);
	p = first;
	q = result;
	while (*p != '\0') {
		*q = *p;
		q++, p++;
	}
	while ((p = va_arg(ap, char *)) != ((char *) NULL)) {
		while (*p != '\0') {
			*q = *p;
			q++, p++;
		}
	}
	*q = '\0';
	va_end(ap);

	return result;
}
