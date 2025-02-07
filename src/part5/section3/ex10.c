/* 
 *
 * Q: What output does the following program fragment produce?
 * Assume that i is an integer variable.
 *
 * 	i = 1;
 * 	switch (i % 3) {
 * 		case 0: printf("zero");
 * 		case 1: printf("one");
 * 		case 2: printf("two");
 *
 * A: "onetwo": no break statement
 *
 * Date: 2025-02-07
 * Time: 16:53 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	i = 1;
	switch (i % 3) {
		case 0: printf("zero");
		case 1: printf("one");
		case 2: printf("two");
	}

	exit(EXIT_SUCCESS);
}
