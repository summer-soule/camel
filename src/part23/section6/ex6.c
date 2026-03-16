/*
 *
 * Task:
 *		In each of the following cases, indicate which function
 *		would be the best to use: memcpy, memmove, strcpy, or strncpy.
 *		Assume that the indicated action is to be performed by a single
 *		function call.
 *
 *		(a) Moving all elements of an array "down" one position
 *			in order to leave room for a new element in position 0.
 *		(b) Deleting the first character in a null-terminated
 *			string by moving all other characters back one position.
 *		(c) Copying a string into a character array that may not
 *			be large enough to hold it. If the array is too small,
 *			assume that the string is to be truncated; no null
 *			character is necessary at the end.
 *		(d) Copying the contents of one array variable into another.
 *
 * Date: 2026-03-11
 * Time: 05:06 PM
 *
 */

#include <stddef.h>
#define _DEFAULT_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void var_a(void);
void var_b(void);
void var_c(void);
void var_d(void);

int main(void) {
	var_a();
	var_b();
	var_c();
	var_d();

	exit(EXIT_SUCCESS);
}

void var_a(void) {
	printf("Variant (a):\n");
	printf("using memmove(arr+1, arr, sizeof(int) * n)\n");

	// create array of n elements
	size_t n = 10;
	int *arr = malloc(sizeof(int) * n);
	if (!arr) {
		fprintf(stderr, "err: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	for (int i = 0; i < n; i++) arr[i] = i;

    // show contents before memmove
    printf("array before memmove:\n");
    for (int i = 0; i < n; i++) printf("arr[%d]: %d\n", i, arr[i]);

	// realloc array and move contents down
	arr = reallocarray(arr, n+1, n);
	if (!arr) {
		fprintf(stderr, "err: malloc failed\n");
		exit(EXIT_FAILURE);
	}

    memmove(arr+1, arr, sizeof(int) * n);

	// show contents after memmove
	printf("array after memmove:\n");
    for (int i = 0; i < 11; i++) printf("arr[%d]: %d\n", i, arr[i]);

	printf("\n\n");
}

void var_b(void) {
	printf("Variant b\n");
	printf("using strcpy(str, str+1);\n");

	char str[] = "null";
	printf("string before strcpy: \"%s\"\n", str);

	strcpy(str, str+1);

    printf("string after strcpy: \"%s\"\n", str);
	printf("\n\n");
}

void var_c(void) {
	printf("Variant c\n");
    printf("using strncpy(arr, \"012345678910111213\", sizeof(arr) / sizeof(char))\n");


    char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    // show contents of arr before strncpy
    printf("arr before strncpy:\n");
    for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
        printf("arr[%d]: %c\n", i, arr[i]);

    // copy string into array
    strncpy(arr, "012345678910111213", sizeof(arr) / sizeof(char));

    // show contents of arr after strncpy
    printf("arr after strncpy:\n");
    for (int i = 0; i < sizeof(arr) / sizeof(char); i++)
                printf("arr[%d]: %c\n", i, arr[i]);


    printf("\n\n");
}

void var_d(void) {
    printf("Variant d\n");
    printf("using memcpy\n");

    int arr1[5] = {0, 1, 2, 3, 4};
    int arr2[5] = {5, 6, 7, 8, 9};

    // show contents of arr1 and arr2 arrays before memcpy
	printf("shot contents of arr1 and arr2 before memcpy\n");
    for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
                printf("arr1[%d]: %d\n", i, arr1[i]);
    for (int i = 0; i < sizeof(arr2) / sizeof(int); i++)
                printf("arr2[%d]: %d\n", i, arr2[i]);

	// memcpy
    memcpy(arr1, arr2, sizeof(arr1));

	// show contents of arr1 and arr2 arrays after memcpy
	printf("\nshot contents of arr1 and arr2 after memcpy\n");
    for (int i = 0; i < sizeof(arr1) / sizeof(int); i++)
                printf("arr1[%d]: %d\n", i, arr1[i]);
    for (int i = 0; i < sizeof(arr2) / sizeof(int); i++)
                printf("arr2[%d]: %d\n", i, arr2[i]);

    printf("\n");
}
