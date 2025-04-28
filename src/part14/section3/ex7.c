/*
 *
 * Task: Let GENERIC_MAX be the following macro:
 *
 * 	#define GENERIC_MAX(type)			\
 * 	type type##_max(type x, type y)		\
 * 	{									\
 * 		return x > y ? x : y;			\
 * 	}
 *
 * (a) Show the preprocessor's expansion of GENERIC_MAX(long).
 * 	   A:
 * 	   		long long_max(long x, long y)
 * 	   		{
 * 	   			return x > y ? x : y;
 * 	   		}
 * (b) Explain why GENERIC_MAX doesn't work for basic types such as
 * 	   unsigned long.
 *
 * 	   A:
 * 	   GENERIC_MAX(unsigned long) expands to
 *
 * 	   unsigned long unsigned long_max(unsigned long x, unsigned long y) {...}
 *
 * 	   where space character leads to non valid type "unsigned long unsigned"
 * 	   and function name long_max which is also not expected function name.
 *
 * (c) Describe a technique that would allow us to use GENERIC_MAX with basic
 * 	   types such as unsigned long.
 * 	   Hint: Don't change the definition of GENERIC_MAX
 *
 * 	   A: Just create another macro that expands to desired type as follow:
 * 	   #define UNSIGNED_LONG unsigned long
 * 	   Or define equivalent type without spaces in the name using typedef:
 * 	   typedef unsigned long ULONG;
 *
 * Date: 2025-04-28
 * Time: 08:43 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned long ULONG;
#define UNSIGNED_LONG unsigned long

#define GENERIC_MAX_PROTO(type)		\
type type##_max(type x, type y)

#define GENERIC_MAX(type)				\
type type##_max(type x, type y)			\
{										\
	return x > y ? x : y;				\
}

GENERIC_MAX_PROTO(long);
GENERIC_MAX_PROTO(ULONG);
GENERIC_MAX_PROTO(UNSIGNED_LONG);

int main(void) {
	long x = 5;
	long y = 10;

	unsigned long a = 15;
	unsigned long b = 3;

	printf("long_max(%ld, %ld): %ld\n", x, y, long_max(x, y));
	printf("ULONG_max(%lu, %lu): %lu\n", a, b, ULONG_max(a, b));
	printf("UNSIGNED_LONG_max(%lu, %lu): %lu\n", a, b, UNSIGNED_LONG_max(a, b));

	exit(EXIT_SUCCESS);
}

GENERIC_MAX(long)
GENERIC_MAX(ULONG)
GENERIC_MAX(UNSIGNED_LONG)
