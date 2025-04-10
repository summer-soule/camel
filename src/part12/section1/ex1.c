/*
 *
 * Task: Suppose that the following declarations are in effect:
 *
 * 	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
 * 	int *p = &a[1], *q = &a[5];
 *
 * 	(a) What is the value of *(p+3)?				14
 * 	(b) What is the value of *(q-3)?				34
 * 	(c) What is the value of q-p?					 4
 * 	(d) Is the condition p < q true or false?		true
 * 	(e) Is the condition *p < *q true or false?		false
 *
 * Date: 2025-04-10
 * Time: 11:27 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
	int *p = &a[1], *q = &a[5];

	printf("*(p+3): \t%d\n", *(p+3));
	printf("*(q-3): \t%d\n", *(q-3));
	printf("q-p: \t\t%2ld\n", q-p);
	printf("p < q: \t\t%2d\n", p < q);
	printf("*p < *q: \t%2d\n", *p < *q);

	exit(EXIT_SUCCESS);
}
