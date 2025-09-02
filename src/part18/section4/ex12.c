/*
 *
 * Task:
 *		(a) Write a complete description of the type of the function f,
 *			assuming that it's declared as follows:
 *
 *			int (*f(float (*)(long), char *))(double);
 *
 *		A:  f is a function with two arguments: first is a pointer to a
 *			function with long integer argument that returns float;
 *			second is a pointer to a char. The function returns pointer
 *			to function that has double argument and returns int.
 *
 *		(b) Give an example showing how f would be called.
 *
 * Date: 2025-08-31
 * Time: 08:23 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float fn_frst(long);
int fn_scnd(double);

int (*f(float (*)(long), char *))(double);


int main(void) {
	char ch = 'a';
	int n = f(fn_frst, &ch)(5.2f);
	printf("result: %d\n", n);
	exit(EXIT_SUCCESS);
}

// there is just a call of fn_scnd with use of double dvar parameter
int (*f(float (*fn)(long), char *chvar))(double dvar) {
	return fn_scnd;
}

float fn_frst(long var) {
	float a = 0.2;
    return a + (float) var;
}

int fn_scnd(double var) {
    return var > 5.0f ? true : false;
}    
