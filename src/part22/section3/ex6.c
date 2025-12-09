/*
 *
 * Task:
 *		Write a call of printf that prints
 *
 *		1 widget
 *
 *		if the widget variable (of type int) has the value 1, and
 *
 *		n widgets
 *
 *		otherwise, where n is the value of widget. You are not allowed to
 *		use the if statement or any other statement; the answer must
 *		be a single call of printf.
 *
 * Date: 2025-12-09
 * Time: 04:50 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int widget = 0;

	for (int i = 0; i < 5; i++) {
        printf(widget == 1 ? "%d widget\n" : "%d widgets\n", widget);
		widget++;
    }

	exit(EXIT_SUCCESS);
}
