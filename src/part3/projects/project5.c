//-----------------------------------------------------------------------------
//
// Task: Write a program that asks the user to enter the numbers from I to 16 
// (in any order) and then displays the numbers in a 4 by 4 arrangement,
// followed by the sums of the rows, columns, and diagonals:
//
// Enter the numbers from 1 to 16 in any order:
// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1
//
// 16 3 2 13
// 5 10 11 8
// 9 6 7 12
// 4 15 14 1
//
// Row sums: 34 34 34 34
// Column sums: 34 34 34 34
// Diagonal sums: 34 34
//
// Date: 2025-1-14
// Time: 9:15 AM
//
//-----------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>

#define ROW_SUM v1 + v2 + v3 + v4, v5 + v6 + v7 + v8, v9 + v10 + v11 + v12, \
	v13 + v14 + v15 + v16
#define COL_SUM v1 + v5 + v9 + v13, v2 + v6 + v10 + v14, v3 + v7 + v11 + v15,\
	v4 + v8 + v12 + v16
#define DIAG_SUM v1 + v6 + v11 + v16, v4 + v7 + v10 + v13

int main(void)
{
	int v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,v11,v12,v13,v14,v15,v16 = 0;

	printf("Enter the numbers from 1 to 16 in any order:\n");
	scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d", &v1,&v2,&v3,&v4,&v5,&v6,&v7,&v8,
			&v9,&v10,&v11,&v12,&v13,&v14,&v15,&v16);
	printf("%d %d %d %d\n", v1, v2, v3, v4);
	printf("%d %d %d %d\n", v5, v6, v7, v8);
	printf("%d %d %d %d\n", v9, v10, v11, v12);
	printf("%d %d %d %d\n", v13, v14, v15, v16);

	printf("Row sums: %d %d %d %d\n", ROW_SUM);
	printf("Column sums: %d %d %d %d\n", COL_SUM);
	printf("Diagonal sums: %d %d\n", DIAG_SUM);
	
	exit(EXIT_SUCCESS);
}
