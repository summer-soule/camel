/* 
 *
 * Project 1.
 *
 * Task: The square2.c program of Section 6.3 will fail (usually by printing
 * strange answers) if i * i exceeds the maximum int value. Run the program and
 * determine the smallest value of n that causes failure. Try changing the type
 * of i to short and running the program again. (Don't forget to update the
 * conversion specifications in the call of printf!) Then try long. From these
 * experiments, what can you conclude about the number of bits used to store
 * integer types on your machine?
 *
 * A: short i overflow leads to infinite loop or incorrect result;
 * 	  long i overflow has similar effect, but correct results are bigger;
 *
 * 	  More bits in variable type make it able to store bigger values.
 * 	  
 *
 * Date: 2025-02-19
 * Time: 1:20 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long i;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		printf("%10ld %10ld\n", i, i * i);
	
	exit(EXIT_SUCCESS);
}
