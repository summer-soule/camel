/*
*
* Task: The algorithm for computing the UPC check digit ends with the following
* steps:
*
* Subtract 1 from the total.
* Compute the remainder when the adjusted total is divided by 10.
* Subtract the remainder from 9.
*
* It's tempting to try to simplify the algorithm by using these steps instead:
* 
* Compute the remainder when the total is divided by 10.
* Subtract the remainder from 10.
*
* Why doesn't this technique work?
*
* Date: 2025-1-31
* Time: 04:06 PM
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

int main(void)
{
  int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
      first_sum, second_sum, total;

  printf("Enter the first (single) digit: ");
  scanf("%1d", &d);
  printf("Enter first group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
  printf("Enter second group of five digits: ");
  scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);

  first_sum = d + i2 + i4 + j1 + j3 + j5;
  second_sum = i1 + i3 + i5 + j2 + j4;
  total = 3 * first_sum + second_sum;

  printf("Check digit: %d\n", 9 - ((total - 1) % 10));
  printf("Check digit new: %d\n", 10 - (total % 10));

  return 0;
}
