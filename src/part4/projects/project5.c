/* 
 * Project 5.
 *
 * Task: Rewrite upc.c program of Section 4.1 so that the user enters 11
 * digits at one time, instead of entering one digit, then five digits, and
 * then another five digits.
 *
 * Enter the first 11 digits of a UPC: 01380015173
 * Check digit: 5
 *
 * Date: 2025-02-05
 * Time: 09:35 AM
 *
 */

/*********************************************************
 * From C PROGRAMMING: A MODERN APPROACH, Second Edition *
 * By K. N. King                                         *
 * Copyright (c) 2008, 1996 W. W. Norton & Company, Inc. *
 * All rights reserved.                                  *
 * This program may be freely distributed for class use, *
 * provided that this copyright notice is retained.      *
 *********************************************************/

/* upc.c (Chapter 4, page 57) */
/* Computes a Universal Product Code check digit */

#include <stdio.h>
#include <stdlib.h>

#define INPUT 12

int main(void)
{
	int	first_sum, second_sum, total;
	long int upcArray[INPUT];
	long int upcSrc;
	int i, j;
	
	first_sum = 0;
	second_sum = 0;

	printf("Enter the first 11 digits of a UPC: ");
	scanf("%12ld", &upcSrc);

	printf("Entered number: %ld\n", upcSrc);

	/* Write last number to array */
	upcArray[10] = upcSrc % 10;
	
	/* Check for first number 0 and write upcSrc to array by single number */
	if(upcSrc > 9999999999)
	{
		for(i = 0, j = 9; i < 10; i++)
		{
			if(upcSrc > 9)
				upcArray[j] = (upcSrc /= 10) % 10;
			else
				upcArray[j] = upcSrc;
			j--;
		}
	}
	else
	{
		upcArray[0] = 0;
		for(i = 1, j = 9; i < 10; i++)
		{
			if(upcSrc > 9)
				upcArray[j] = (upcSrc /= 10) % 10;
			else
				upcArray[j] = upcSrc;
			j--;
		}
	}

	/* Calculate first sum */
	for(i = 0; i < 11; i++) if((i % 2) == 0) first_sum += upcArray[i];

	/* Calculate second sum */
	for(i = 0; i < 11; i++) if((i % 2) == 1) second_sum += upcArray[i];

	/* Calculate total */
	total = 3 * first_sum + second_sum;

	printf("Check digit: %d\n", 9 - ((total - 1) % 10));

	exit(EXIT_SUCCESS);
}
