/*
 *
 * Task:
 * 		Show the output of the following program and explain what it does.
 *
 * 		#include <stdio.h>
 *
 * 		int f1(int (*f)(int));
 * 		int f2(int i);
 *
 * 		int main(void) {
 * 			printf("Answer: %d\n", f1(f2));
 * 			return 0;
 * 		}
 *
 * 		int f1(int (*f)(int)) {
 *			int n = 0;
 *
 *			while ((*f)(n)) n++;
 *			return n;
 *		}
 *
 *		int f2(int i) {
 *			return i * i + i - 12;
 *		}
 *
 * Answer:
 * 		'Answer: 3'
 *
 * Explanation:
 *		When f1 calls function f2 it increment variable n until return value
 *		of f2 is not equal to 0. After while loop ends, n contains value, that
 *		was passed to f2 to make it return 0, which is 3.
 *
 * Date: 2025-06-13
 * Time: 03:16 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int f1(int (*f)(int));
int f2(int i);

int main(void) {
	printf("Answer: %d\n", f1(f2));

	exit(EXIT_SUCCESS);
}

int f1(int (*f)(int)) {
	int n = 0;

	while ((*f)(n)) n++;
	return n;
}

int f2(int i) {
	return i * i + i - 12;
}
