/*
 *
 * Task: 
 *
 * (a) Show what the following program will look like after
 * 	   preprocessing. You may ignore any lines added to the program
 * 	   as a result of including the <stdio.h> header.
 *
 * 	   #include <stdio.h>
 *
 * 	   #define N 100
 *
 * 	   void f(void);
 *
 * 	   int main(void)
 * 	   {
 * 	   		f();
 * 	   #ifdef N
 * 	   #undef N
 * 	   #endif
 * 	   		return 0;
 * 	   }
 *
 * 	   void f(void)
 * 	   {
 * 	   #if defined(N)
 * 	   		printf("N is %d\n", N);
 * 	   #else
 * 	   		printf("N is undefined\n");
 * 	   #endif
 * 	   }
 *
 * (b) What will be the output of this program?
 *
 * Date: 2025-04-29
 * Time: 04:24 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

void f(void);

int main(void)
{
	f();
	exit(EXIT_SUCCESS);
}

void f(void)
{
	printf("N is undefined\n");
}
