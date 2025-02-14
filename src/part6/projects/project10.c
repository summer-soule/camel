/* 
 *
 * Project 10.
 *
 * Task: Programming Project 9 in Chapter 5 asked you to wrote a program that
 * determines which of two dates comes earlier on the calendar. Generalize the
 * program so that the user may enter any number of dates. The user will enter
 * 0/0/0 to indicate that no more dates will be entered:
 *
 * Enter a date (mm/dd/yy): 3/6/08
 * Enter a date (mm/dd/yy): 5/17/07
 * Enter a date (mm/dd/yy): 6/3/07
 * Enter a date (mm/dd/yy): 0/0/0
 * 5/17/07 is the earliest date
 *
 * Date: 2025-02-13
 * Time: 10:54 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define INVALID 0
#define VALID 1

int main(void)
{
	int mm, dd, yy;
	int mm1, dd1, yy1;
	int curr, earl = 0;
	int flag = VALID;

	do {
		printf("Enter a date (mm/dd/yy): ");
		scanf("%d/%d/%d", &mm, &dd, &yy);

		flag = VALID;

		curr = yy * 10000 + mm * 100 + dd;
		printf("%d\n", curr);

		if (earl == 0) earl = curr;
		printf("%d\n", earl);

		if (curr == 0) break;

		if (mm <= 12 && mm > 0) {
				switch(mm) {
					case 1: case 3: case 5: case 7: case 8: case 10: case 12:
						if (dd > 31) {
								printf("Invalid date! There is only 31 days!\n");
								flag = INVALID;
								break;
							}
					case 4: case 6: case 9: case 11:
						if (dd > 30) {
								printf("Invalid date! There is only 30 days!\n");
								flag = INVALID;
								break;
							}
					case 2:
						if (dd > 29 && (yy % 4 == 0)) {
								printf("Invalid date! There is only 29 days!\n");
								flag = INVALID;
								break;
						}
						else if (dd > 28 && (yy % 4 != 0)) {
								printf("Invalid date! There is only 28 days!\n");
								flag = INVALID;
								break;
						}
					default:
						printf("Date is valid!\n");
				}
		}
		else printf("Invalid month!\n");

		if (flag == VALID && curr <= earl) {
			mm1 = mm;
			dd1 = dd;
			yy1 = yy;
			earl = curr;
		}
	} while (curr != 0);

	printf("%d/%02d/%02d is the earliest date\n", mm1, dd1, yy1);

	exit(EXIT_SUCCESS);
}
