/*
 *
 * Project 15.
 *
 * Task: Modify Programming Project 6 from Chapter 10 so that it includes the
 * following function:
 *
 * 	int evaluate_RPN_expression(const char *expression);
 *
 * The function returns the value of the RPN expression pointed to by
 * expression.
 *
 * Date: 2025-04-24
 * Time: 10:25 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>

#define STACK_SIZE	100

int contents[STACK_SIZE] = {0};
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int ch);
int pop(void);
void stack_underflow(void);
void stack_overflow(void);
int evaluate_RPN_expression(const char *expression);

int main(void) {

	char ch, expression[STACK_SIZE], *p;

	while (true) {
		p = expression;
		printf("Enter an RPN expression: ");
		while ((ch = getchar()) != '\n' && p < expression+STACK_SIZE)
			*p++ = ch;

		printf("Result of expression: %d\n", evaluate_RPN_expression(expression));
		p = expression;

		while (*p)
			*p++ = '\0';
	}

	exit(EXIT_SUCCESS);
}

void make_empty(void)
{
	top = 0;
}

bool is_empty(void)
{
	return top == 0;
}

bool is_full(void)
{
	return top == STACK_SIZE;
}

void push(int ch)
{
	if (is_full())
		stack_underflow();
	else
		contents[top++] = ch;
}

int pop(void)
{
	if (is_empty())
		stack_underflow();

	return contents[--top];
}

void stack_underflow(void)
{
	printf("Not enough operands in expression\n");
	exit(EXIT_FAILURE);
}

void stack_overflow(void)
{
	printf("Expression is too comples\n");
	exit(EXIT_FAILURE);
}

int evaluate_RPN_expression(const char *expression)
{
	char a, b;

	while (*expression) {
		if (isdigit(*expression))
			push(*expression - '0');
		else
		switch (*expression) {
			case '+':
				push(pop() + pop());
				break;
			case '-':
				a = pop();
				b = pop();
				push(b - a);
				break;
			case '*':
				push(pop() * pop());
				break;
			case '/':
				a = pop();
				b = pop();
				push(b / a);
				break;
			case '=':
				return pop();
				break;
			case ' ':
				break;
			default:
				exit(EXIT_SUCCESS);
		}
		expression++;
	}
	exit(EXIT_FAILURE);
}
