/* 
 *
 * Task: For each of the following items of data, specify which one of the
 * types char, short, int or long is the smallest one guaranteed to be large
 * enough to store the item.
 *
 * (a) Days in a month
 * (b) Days in year
 * (c) Minutes in a day
 * (d) Seconds in a day
 *
 * Date: 2025-02-17
 * Time: 15:12 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	/* Maximum 31 days */
	short int days = 31;

	/* Maximum 365 days in year */
	short int yearDays = 365;

	/* Maximum 1440 minutes in a day */
	short int dayMinutes = 1440;

	/* Maximum seconds in a day */
	long int daySeconds = 86400;

	printf("In a month maximum %d days.\n", days);
	printf("In a year maximum %d days.\n", yearDays);
	printf("In a day %d minutes.\n", dayMinutes);
	printf("In a day %ld days.\n", daySeconds);

	exit(EXIT_SUCCESS);
}
