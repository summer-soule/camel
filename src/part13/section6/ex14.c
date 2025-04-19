/*
 *
 * Task: What does the following program print?
 *
 * 	#include <stdio.h>
 *
 * 	int main(void)
 * 	{
 * 		char s[] = "Hsjodi", *p;
 *
 * 		for (p = s; *p; p++)
 * 			--p*;
 * 		puts(s);
 * 		return 0;
 * 	}
 *
 * Date: 2025-04-19
 * Time: 11:47 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[] = "Hsjodi", *p;

	for (p = s; *p; p++)
		--*p;
	puts(s);

	exit (EXIT_SUCCESS);
}
