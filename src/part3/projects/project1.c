//-----------------------------------------------------------------------------
//
// Task: Write a program that accepts a date from the user in the
// form mm/dd/yyyy and then displays it in the form yyyymmdd:
//
// Enter a date (mm/dd/yyyy) : 2/17/2011
// You entered the date 20110217
//
// Date: 2025-1-10
// Time: 20:31 PM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int dd, mm, yyyy;
	printf("Enter a date (mm/dd/yyyy) : ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("You entered the date %04d%02d%02d\n", yyyy, mm, dd);

	exit(EXIT_SUCCESS);
}
