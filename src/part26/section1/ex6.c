/*
 *
 * Task:
 *		Write the following function:
 *
 *		char *max_pair(int num_pairs, ...);
 *
 *		The arguments of max_pair are assumed to be "pairs" of integers
 *		and strings; the value of num_pairs indicates how many pairs
 *		will follow. (A pair consists of an int argument followed by
 *		a char * argument). The function searches the integers to find
 *		the largest one; it then returns the string argument that
 *		follows it. Consider the following call:
 *
 *		max_pair(5, 180, "Seinfeld", 180, "I Love Lucy",
 *					39, "The Honeymooners", 210, "All in the Family",
 *					86, "The Sopranos")
 *
 *		The largest int argument is 210, so the function returns
 *		"All in the Family", which follows it in the argument list.
 *
 * Date: 2026-04-24
 * Time: 12:06 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct {
	int value;
	char *str;
} Pair;

char *max_pair(int num_pairs, ...);
int pairs_compar(const void *a, const void *b);

int main(void) {
    printf("test string: %s\n",
           max_pair(5, 180, "Seinfeld", 180, "I Love Lucy",
                    30, "The Honeymooners", 210, "All in the Family",
                    86, "The Sopranos"));

	exit(EXIT_SUCCESS);
}

char *max_pair(int num_pairs, ...) {
	va_list ap;
	Pair pairs[num_pairs];

    // save related value and string into pairs array
	va_start(ap, num_pairs);
	for (int i = 0; i < num_pairs; i++) {
		pairs[i].value = va_arg(ap, int);
		pairs[i].str = va_arg(ap, char *);
	}
	va_end(ap);

	// sort pairs[]
	qsort(pairs, num_pairs, sizeof(Pair), pairs_compar);

	// return top array member with greatest value
	return pairs[0].str;
}

int pairs_compar(const void *a, const void *b) {
	const Pair *ia = a;
	const Pair *ib = b;
	return (ia->value < ib->value) - (ia->value > ib->value);
}
