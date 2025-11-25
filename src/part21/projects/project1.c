/*
 *
 * Project 1.
 *
 * Task:
 *		Write a program that declares the s structure (see Section 21.4)
 *		and prints the sizes and off-sets of the a, b, and c members.
 *		(Use sizeof to find sizes; use offsetof to find off-sets.)
 *		Have the program print the size of the entire structure as well.
 *		From this information, determine whether or not the structure has
 *		any holes. If it does, describe the location and size of each.
 *
 * Date: 2025-11-25
 * Time: 02:08 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

struct s {
	char a;
    int b[2];
    float c;
};

int main(void) {

    struct s st = {.a = 'a', .b = {[0] = 0, [1] = 1}, .c = 1.2};

    unsigned long sizes[4] = {
		sizeof(st),
		sizeof(st.a),
		sizeof(st.b),
		sizeof(st.c)
    };

    printf("size of struct s: %lu\n", sizes[0]);
    printf("size of a: %lu\n", sizes[1]);
    printf("size of b: %lu\n", sizes[2]);
    printf("size of c: %lu\n", sizes[3]);

    unsigned long offsets[3] = {
		offsetof(struct s, a),
		offsetof(struct s, b),
		offsetof(struct s, c)
    };

    printf("\noffset of a: %lu\n", offsets[0]);
    printf("offset of b: %lu\n", offsets[1]);
    printf("offset of c: %lu\n\n", offsets[2]);

    if (sizes[0] - sizes[1] - sizes[2] - sizes[3]) {
		if (offsets[0] + sizes[1] != offsets[1])
            printf("hole between a and b with size %lu\n",
                   offsets[1] - sizes[1]);
        if (offsets[1] + sizes[2] != offsets[2])
            printf("hole between b and c with size %lu\n",
                   offsets[2] - offsets[1] - sizes[2]);
        if (offsets[2] + sizes[3] != sizes[0])
            printf("hole at the end of structure with size %lu\n",
                   sizes[0] - offsets[2] - sizes[3]);
    }

	exit(EXIT_SUCCESS);
}
