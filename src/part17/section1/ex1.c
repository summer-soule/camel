/*
 *
 * Task:
 *		Having to check the return value of malloc (or any other memory
 *		allocation function) each time we call it can be an annoyance.
 *		Write a function named my_malloc that serves as a "wrapper"
 *		for malloc. When we call my_malloc and ask it to allocate
 *		n bytes, it in turn calls malloc, tests to make sure that malloc
 *		doesn't return a null pointer, and then returns the pointer from
 *		malloc. Have my_malloc print an error message and terminate the
 *		program if malloc returns a null pointer.
 *
 * Date: 2025-05-26
 * Time: 04:55 AM
 *
 */

#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t size);

int main(int argc, char *argv[]) {
	int *p_int;
	size_t n;

	printf("Enter amount of bytes: ");
	scanf("%lu", &n);

	p_int = my_malloc(n);
	printf("Allocated %lu bytes.\n", n);

	exit(EXIT_SUCCESS);
}

void *my_malloc(size_t size) {
	void *p;
	if ((p = malloc(size)) != NULL)
		return p;
	printf("err: malloc failed\n");
	exit(EXIT_FAILURE);
}
