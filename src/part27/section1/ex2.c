/*
 *
 * Task:
 *		(C99) Write the parameterized macros INT32_C(n), UINT32_C(n),
 *		INT64_C(n), and UINT64_C(n), assuming that the int type and
 *		long int types are 32 bits wide and the long long int type
 *		is 64 bits wide.
 *
 *		Hint: Use the ## preprocessor operator to attach a suffix
 *		to n containing a combination of L and/or U characters.
 *		(See Section 7.1 for a discussion of how to use the L and U
 *		suffixes with integer constants.)
 *
 * Date: 2026-05-02
 * Time: 08:41 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#undef INT32_C
#undef UINT32_C
#undef INT64_C
#undef UINT64_C

#define INT32_C(n) n
#define UINT32_C(n) n ## U
#define INT64_C(n) n ## L
#define UINT64_C(n) n ## UL

int main(void) {
	int32_t a = INT32_C(10);
	uint32_t b = UINT32_C(10);
	int64_t c = INT64_C(10);
	uint64_t d = UINT64_C(10);

	printf("sizeof(int32 a): %lu\n", sizeof(a));
	printf("sizeof(uint32 b): %lu\n", sizeof(b));
	printf("sizeof(int64 c): %lu\n", sizeof(c));
	printf("sizeof(uint64 d): %lu\n", sizeof(d));

	exit(EXIT_SUCCESS);
}
