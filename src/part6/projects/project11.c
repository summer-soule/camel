/* 
 *
 * Project 11.
 *
 * Task: The value of the mathematical constant e can be expressed as an
 * infinite series:
 *
 * e = 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 *
 * Write a program that approximates e by computing the value of
 *
 * 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!
 *
 * where n is an integer entered by the user.
 *
 * Date: 2025-02-14
 * Time: 14:40 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	double fact, exp;

	fact = 1.0f;
	exp = 1.0f;
	
	printf("Enter approximation scale: ");
	scanf("%d", &n);

	for(int i = 1; i < n; i++) {
		fact *= i;
		exp += 1.0f / fact;
	}

	printf("e = %f\n", exp);

	exit(EXIT_SUCCESS);
}
