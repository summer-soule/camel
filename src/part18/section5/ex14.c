/*
 *
 * Task:
 *		Which kind of variables cannot be initialized?
 *
 *		(a) Array variables
 *		(b) Enumeration variables
 *		(c) Structure variables
 *		(d) Union variables
 *		(e) None of the above
 *
 * A: (e) all of them can be initialized
 *
 * Date: 2025-09-02
 * Time: 11:19 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

enum e { FIRST, SECOND = 3 };

struct structure {
	int sa;
};

union {
	struct {
		int a;
	} ua;
	struct {
		int b;
	} ub;
} u;

int main(void) {
    int arr[] = {0, 1, 2, 3};
    enum e enumeration = SECOND;
	u.ua.a = 10;
    struct structure example = {.sa = 15};
	

	for (int i = 0; i < 4; i++) printf("arr[%d]: %d\n", i, arr[i]);
	putchar('\n');
	printf("u.ua.a: %d\n", u.ua.a);
	printf("struct example .sa: %d\n", example.sa);
	printf("enum SECOND: %d\n", enumeration);
	
	exit(EXIT_SUCCESS);
}
