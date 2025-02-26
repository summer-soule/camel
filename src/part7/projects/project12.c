/* 
 *
 * Project 12.
 *
 * Task: Write a program that evaluates an expression:
 *
 * Enter an expression: 1+2.5*3
 * Value of expression: 10.5
 *
 * The operands in the expression are floating-point numbers; the operators
 * are +, -, *, and /. The expression is evaluated from left to right (no
 * operator takes precedence over any other operator).
 *
 * Date: 2025-02-26
 * Time: 11:49 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) 
{
	char ch;
	float num1, num2;

	printf("Enter an expression: ");

	scanf("%f", &num1);
	scanf("%c", &ch);

	while(ch != '\n') {
		scanf("%f", &num2);
		switch(ch) {
			case '+':
				num1 += num2;
				break;
			case '-':
				num1 -= num2;
				break;
			case '*':
				num1 *= num2;
				break;
			case '/':
				num1 /= num2;
				break;
			default:
				printf("Invalid operator!\n");
				exit(EXIT_SUCCESS);
		}
		scanf("%c", &ch);
	}

	printf("Value of expression: %f\n", num1);

	exit(EXIT_SUCCESS);
}
