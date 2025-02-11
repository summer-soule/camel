/* 
 *
 * Task: Show how to replace a continue statement by an equivalent goto
 * statement.
 *
 * Date: 2025-02-11
 * Time: 17:36 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;

	for (i = 0; i < 10; i++){
		if (i > 5)
			goto gotoExample;
		printf("[goto] i = %d\n", i);
		gotoExample : ;
	}

	for (i = 0; i < 10; i++){
		if (i > 5)
			continue;
		printf("[continue] i = %d\n", i);
	}

	exit(EXIT_SUCCESS);
}
