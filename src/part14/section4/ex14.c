/*
 *
 * Task: Show what the following program will look like after preprocessing.
 * 		 Some lines of the program may cause compilation errors; find all
 * 		 such errors.
 *
 * 		 #define N = 10
 * 		 #define INC(x) x+1
 * 		 #define SUB (x,y) x-y
 * 		 #define SQR(x) ((x)*(x))
 * 		 #define CUBE(x) (SQR(x)*(x))
 * 		 #define M1(x,y) x##y
 * 		 #define M2(x,y) #x #y
 *
 * 		 int main(void)
 * 		 {
 * 		 	int a[N], i, j, k, m;
 *
 * 		 #ifdef N
 * 		 	i = j;
 * 		 #else
 * 		 	j = i;
 * 		 #endif
 *
 * 		 	i = 10 * INC(j);
 * 		 	i = SUB(j, k);
 * 		 	i = SQR(SQR(j));
 * 		 	i = CUBE(j);
 * 		 	i = M1(j, k);
 * 		 	puts(M2(i, j));
 *
 * 		 #undef SQR
 * 		 	i = SQR(j);
 * 		 #define SQR
 * 		 	i = SQR(j);
 *
 * 		 	exit(EXIT_SUCCESS);
 * 		 }
 *
 * Errors:
 * 		 #define N = 10
 * 		 	in macro '=' not needed and leads to error at a[N] declaration
		 #define SUB (x,y) x-y
		 	space char between SUB and (x,y) makes macro named SUB with
			replacement-list (x,y) x-y
			fix is to remove that space
		 #define M1(x,y) x##y
		 	M1(j,k) expands to jk which is might be a name of variable
			declare variable int jk solves the problem
 *
 * Date: 2025-04-29
 * Time: 04:35 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

 #define N 10
 #define INC(x) x+1
 #define SUB(x,y) x-y
 #define SQR(x) ((x)*(x))
 #define CUBE(x) (SQR(x)*(x))
 #define M1(x,y) x##y
 #define M2(x,y) #x #y
 
 int main(void)
 {
 	int a[N], i, j, k, m;
	int jk;
 
 #ifdef N
 	i = j;
 #else
 	j = i;
 #endif
 
 	i = 10 * INC(j);
	i = SUB(j,k);
 	i = SQR(SQR(j));
 	i = CUBE(j);
	i = M1(j, k);
 	puts(M2(i, j));
 
#undef SQR
// call to undefined function SQR()
//	i = SQR(j);
#define SQR
	i = SQR(j);
 
 	exit(EXIT_SUCCESS);
 }
