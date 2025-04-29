/*
 *
 * Task: (C99) Assume that the following macro definitions are in effect:
 *
 * 		 #define IDENT(x) PRAGMA(ident #x)
 * 		 #define PRAGMA(x) _Pragma(#x)
 *
 * 		 What will the following line look like after macro expansion?
 * 		 IDENT(foo)
 *
 * Date: 2025-04-29
 * Time: 07:07 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

// expands to
// #pragma ident "foo"
IDENT(foo)

int main(void) {


	exit(EXIT_SUCCESS);
}
