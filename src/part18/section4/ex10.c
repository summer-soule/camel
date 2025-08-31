/*
 *
 * Task:
 *		Write declarations for the following variables and functions:
 *
 *		(a) p is a pointer to a function with a character pointer
 *			argument that returns a character pointer.
 *
 *		(b) f is a function with two arguments: p, a pointer to a
 *			structure with tag t, and n, a long integer. f returns
 *			a pointer to a function that has no arguments and
 *			returns nothing.
 *
 *		(c) a is an array of four pointers to functions that have
 *			no arguments and return nothing. The elements of a
 *			initially point to functions named insert, search,
 *			update, and print.
 *
 *		(d) b is an array of 10 pointers to functions with two int
 *			arguments that return structures with tag t.
 *
 * Date: 2025-08-31
 * Time: 01:27 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

// a
char *(*p)(char *);

// b
struct t {
	int x;
};
void (*f(struct t *p, long n))(void);

// c
void insert(void);
void search(void);
void update(void);
void print(void);
void (*a[4])(void) = {insert, search, update, print};

// d
struct t (*b[10])(int, int);

int main(void) {
	printf("empty body\n");
	exit(EXIT_SUCCESS);
}

void insert(void) { printf("insert call\n"); }
void search(void) { printf("search call\n"); }
void update(void) { printf("update call\n"); }
void print(void) { printf("print call\n"); }
