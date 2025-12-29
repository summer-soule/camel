/*
 *
 * Project 12.
 *
 * Task:
 *		Modify Programming Project 2 fomr Chapter 3 so that
 *		the program reads a series of items from a file and
 *		displays the data in columns. Each line of the file
 *		will have the following form:
 *
 *		item,price,mm/dd/yyyy
 *
 *		For example, suppose that the file contains the
 *		following lines
 *
 *		583,13.5,10/24/2005
 *		3912,599.99,7/27/2008
 *
 *		The output of the program should have the following
 *		appearance:
 *
 *		Item		Unit			Purchase
 *					Price			Date
 *		583			$  13.50		10/24/2005
 *		3912		$ 599.99		7/27/2008
 *
 *		Have the program obtain the file name from the command line.
 *
 * Date: 2025-12-29
 * Time: 09:37 AM
 *
 */

#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DATA_STRING 255

void usage(char *);

int main(int argc, char *argv[]) {
	FILE *fsrc;
	char data[MAX_DATA_STRING];
	int item, mm, dd, yyyy;
	float uPrice = 0.0f;

    if (argc != 2) {
		usage(argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fsrc = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");

	while (fgets(data, MAX_DATA_STRING, fsrc) != NULL) {
        sscanf(data, "%d%*[,]%f%*[,]%d%*[/]%d%*[/]%d",
               &item, &uPrice, &mm, &dd, &yyyy);
        printf("%d\t\t%8.2f\t%d/%d/%.4d\n",
               item, uPrice, mm, dd, yyyy);
	}

	exit(EXIT_SUCCESS);
}

void usage(char *progname) {
	printf("usage: %s FILE\n", strrchr(progname, '/')+1);
	printf("\nArguments:\n");
	printf("\tFILE\t\tfile containing formatted lines like\n");
	printf("\n\t\t\t<Item>,<Price>,<Date>\n");
	printf("\t\t\t583,13.5,10/24/2005\n\t\t\t3912,599.99,7/27/2008\n");
}
