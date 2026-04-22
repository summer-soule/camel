/*
 *
 * Task:
 *		Repeat Exercise 4, this time using the UTF-8 multibyte
 *		encoding. For example, the phrase déjà vu could be
 *		represented by the string "d\xc3\xa9j\xc3\xa0 vu".
 *
 * Date: 2026-04-17
 * Time: 04:49 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    printf("(a): C\xc3\xb4te d'Azur\n");
    printf("(b): cr\xc3\xa8me br\xc3\xbbl\xc3\xa9" "e\n");
    printf("(c): cr\xc3\xa8me fra\xc3\xae""che\n");
    printf("(d): Fahrvergn\xc3\xbcgen\n");
    printf("(e): t\xc3\xaate-\xc3\xa0-t\xc3\xaate\n");

	exit(EXIT_SUCCESS);
}
