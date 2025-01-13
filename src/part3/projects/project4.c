//-----------------------------------------------------------------------------
//
// Task: Write a program that prompts the user to enter a telephone number in
// the form (xxx) xxx- xxxx and then displays the number in the
// form xxx.xxx.xxx:
//
// Enter phone number [(xxx) xxx-xxxx]: (404) 817-6900
// You entered 404.817.6900
//
// Date: 2025-1-13
// Time: 9:41 AM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int first, second, third = 0;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &first, &second, &third);
	printf("You entered %d.%d.%d\n", first, second, third);

	exit(EXIT_SUCCESS);
}
