/* 
 *
 * Project 9.
 *
 * Task: Write a program that prompts the user to enter two dates and then
 * indicates which date comes earlier on the calendar:
 *
 * Enter first date (mm/dd/yy): 3/6/08
 * Enter second date (mm/dd/yy): 5/17/07
 * 5/17/07 is earlier than 3/6/08
 *
 * Date: 2025-02-10
 * Time: 12:29 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define DATE_0 0
#define DATE_1 1
#define DATE_2 2

#define INVALID 0
#define VALID 1

int main(void)
{
	int mm1, dd1, yy1;
	int mm2, dd2, yy2;
	int flag = VALID;
	int mm[2];
	int dd[2];
	int yy[2];

	printf("Enter first date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm1, &dd1, &yy1);

	printf("Enter second date (mm/dd/yy): ");
	scanf("%d/%d/%d", &mm2, &dd2, &yy2);

	mm[0] = mm1;
	dd[0] = dd1;
	yy[0] = yy1;

	mm[1] = mm2;
	dd[1] = dd2;
	yy[1] = yy2;

	if (mm1 <= 12 && mm1 <= 12) {
		for(int i = 0; i < 2; i++) {
			switch(mm[i]) {
				case 1: case 3: case 5: case 7: case 8: case 10: case 12:
					if (dd[i] > 31) {
							printf("Invalid %d%s date! There is only 31 days!\n",
									i+1, i == 0 ? "st" : "nd");
							flag = INVALID;
							break;
						}
				case 4: case 6: case 9: case 11:
					if (dd[i] > 30) {
							printf("Invalid %d%s date! There is only 30 days!\n",
									i+1, i == 0 ? "st" : "nd");
							flag = INVALID;
							break;
						}
				case 2:
					if (dd[i] > 29 && (yy[i] % 4 == 0)) {
							printf("Invalid %d%s date! There is only 29 days!\n",
									i+1, i == 0 ? "st" : "nd");
							flag = INVALID;
							break;
					}
					else if (dd[i] > 28 && (yy[i] % 4 != 0)) {
							printf("Invalid %d%s date! There is only 28 days!\n",
									i+1, i == 0 ? "st" : "nd");
							flag = INVALID;
							break;
					}
				default:
					printf("Date #%d is valid!\n", i+1);
			}
		}

		if (flag == VALID) {
			if (yy1 > yy2) flag = DATE_2;
			else if (yy1 == yy2) {
				if (mm1 > mm2) flag = DATE_2;
				else if (mm1 == mm2) {
					if (dd1 > dd2) flag = DATE_2;
					else if (dd1 == dd2) flag = DATE_0;
					else flag = DATE_1;
				}
				else flag = DATE_1;
			}
			else flag = DATE_1;

			switch(flag) {
				case 0:
					printf("Dates are equal!\n");
					break;
				case 1:
					printf("%d/%d/%2d is earlier than %d/%d/%2d\n", mm1, dd1, yy1, mm2, dd2, yy2);
					break;
				case 2:
					printf("%d/%d/%2d is earlier than %d/%d/%2d\n", mm2, dd2, yy2, mm1, dd1, yy1);
					break;
			}
		}
	}
	else
		printf("Invalid month in %d%s date!\n",
				mm1 > 12 ? 1 : 2,
				mm1 > 12 ? "st" : "nd");


	exit(EXIT_SUCCESS);
}
