/* 
 *
 * Task: What output does the following for statement produce?
 *
 * for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
 * 		printf("%d ", i);
 * 
 * A: 5 4 3 2 
 *
 * Compiler throw warning: left-hand operand of comma expression has no effect
 * -Wunused-value
 *
 * 28: ...i > 0, j > 0...
 * 			^
 *
 * Date: 2025-02-11
 * Time: 15:58 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;

	for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1)
		printf("%d ", i);

	exit(EXIT_SUCCESS);
}
