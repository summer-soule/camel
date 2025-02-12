/* 
 *
 * Task: Rewrite the following loop so that its body is empty:
 *
 * for (n = 0; m > 0; n++)
 * 		m /= 2;
 *
 * Date: 2025-02-12
 * Time: 07:36 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int m, n;

	m = 40;

	for (n = 0; m > 0; n++, printf("%d\n",m /= 2))
		;

	exit(EXIT_SUCCESS);
}
