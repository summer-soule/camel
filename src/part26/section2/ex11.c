/*
 *
 * Task:
 *		Although the bsearch function is normally used with a
 *		sorted array, it will sometimes work correctly with an
 *		array that is only partially sorted. What condition must
 *		an array satisfy to guarantee that bsearch works properly
 *		for a particular key?
 *
 *		Hint: The answer appears in the C standard.
 *
 * Date: 2026-04-26
 * Time: 03:03 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int compar(const void *, const void *);

int main(void) {
	int arr[10] = { 1, 2, 3, 4, 5, 9, 8, 7, 6, 10};
	int key = 4;

    /* The comparison function pointed to by compar is called with two
       arguments that point to the key object and to an array element, in
       that order. The function shall return an integer less than, equal to,
       or greater than zero if the key object is considered, respectively,
       to be less than, to match, or to be greater than the array element.
       The array shall consist of: all the elements that compare less than,
       all the elements that compare equal to, and all the elements that
       compare greater than the key object, in that order. */


    // In other words: all elements before the given key must be arranged
    // so that all elements less than the key precede all elements equal
    // to the key, and all elements equal to the key precede all elements
    // greater than the key. A fully sorted array always satisfies this,
    // but the standard does not demand a full sort.

    int *result = NULL;
    result = bsearch(&key, arr, 10, sizeof(int), compar);

	printf("key: %d\n", key);
	if (result != NULL) printf("result: %d\n", *result);
	else printf("result is NULL\n");

	exit(EXIT_SUCCESS);
}

int compar(void const *a, void const *b) {
	int const *ia = a;
	int const *ib = b;

	return (*ia > *ib) - (*ia < *ib);
}
