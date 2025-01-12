//-----------------------------------------------------------------------------
//
// Task: Write a program that formats product information entered by the user.
// A session with the program should look like this:
//
// Enter item number: 583
// Enter unit price: 13.5
// Enter purchase date (mm/dd/yyyy): 10/24/2010
// Item		Unit		Purchase
// 			Price		Date
// 583		$ 13.50		10/24/2010
//
// The item number and date should be left justified; the unit price should be
// right justified. Allow dollar amounts up to $9999.99.
// Hint: Use tabs to line up the columns.
//
// Date: 2025-1-12
// Time: 7:37 AM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int item, mm, dd, yyyy = 0;
	float uPrice = 0.0f;

	printf("Enter item number: ");
	scanf("%d", &item);
	printf("Enter unit price: ");
	scanf("%f", &uPrice);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &mm, &dd, &yyyy);
	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$ %7.2f\t%02d/%02d/%04d\n", item, uPrice, mm, dd, yyyy);

	exit(EXIT_SUCCESS);
}
