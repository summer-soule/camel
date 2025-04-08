/*
 *
 * Project 7.
 *
 * Task: Write a program that prompts the user for a number and then displays
 * the number, using characters to simulate the effect of a seven-segment
 * display:
 * 
 * Enter a number: 491-9014
 *
 *      _       _   _  
 * |_| |_|   | |_| | |   | |_|
 *   |  _|   |  _| |_|   |   |
 *
 * Characters other than digits should be ignored. Write the program so that
 * the maximum number of digits is controlled by a macro namex MAX_DIGITS,
 * which has the value 10. If the number contains more than this number of
 * digits, the extra digits are ignored.
 *
 * Hints: Use two external arrays. One is the segments array (see Exercise 6
 * in Chapter 8), which stores data representing the correspondence between
 * digits and segments. The other array, digits[], will be an array of
 * characters with 4 rows (since each segmented digit is four characters high)
 * and MAX_DIGITS * 4 columns (digits are three characters wide, but a space
 * is needed between digits for readability). Write your program as four
 * functions: main, clear_digits_array, process_digit, and print_digits_array.
 * Here are the prototypes for the latter three functions:
 *
 * void clear_digits_array(void);
 * void process_digit(int digit, int position);
 * void print_digits_array(void);
 *
 * clear_digits_array will store blank characters into all elements  of the
 * digits[] array. process_digit will store the seven-segment representation
 * of digit into a specified position in the digits array (positions range
 * from 0 to MAX_DIGITS - 1). print_digits_array will display the rows of the
 * digits[] array, each on a single line, producing output such as that shown
 * in the example.
 *
 * Date: 2025-04-06
 * Time: 11:11 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_DIGITS 10

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, // 0
							 {0, 1, 1, 0, 0, 0, 0}, // 1
							 {1, 1, 0, 1, 1, 0, 1}, // 2
							 {1, 1, 1, 1, 0, 1, 0}, // 3
							 {0, 1, 1, 0, 0, 1, 1}, // 4
							 {0, 0, 1, 1, 0, 1, 1}, // 5
							 {1, 0, 1, 1, 1, 1, 1}, // 6
							 {1, 1, 1, 0, 0, 0, 0}, // 7
							 {1, 1, 1, 1, 1, 1, 1}, // 8
							 {1, 1, 1, 1, 0, 1, 1}}; // 9

// in my version maximum digit height is 3 characters
char digits[3][MAX_DIGITS*4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int
main(void) {
	char ch;
	int n = 0;

	printf("Enter a number: ");

	clear_digits_array();

	// read input by single character, check for isdigit() 
	// and do process_digit() if true
	while((ch = getchar()) != '\n' && n < MAX_DIGITS)
		if (isdigit(ch)) {
			process_digit(ch-'0', n++);
		}

	print_digits_array();

	exit(EXIT_SUCCESS);
}

// set all digits[][] to space character
void
clear_digits_array(void)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < MAX_DIGITS*4; j++)
			digits[i][j] = ' ';
}

// set characters for digit in digits[][] according to segments[][] with choosing
// between '|' or '_' depends on position
void
process_digit(int digit, int position)
{
	for (int i = 0; i < 7; i++)
		switch (i) {
			case 0:
				if (segments[digit][i])
				digits[0][position*4+1] = '_';
				break;
			case 1:
				if (segments[digit][i])
				digits[1][position*4+2] = '|';
				break;
			case 2:
				if (segments[digit][i])
				digits[2][position*4+2] = '|';
				break;
			case 3:
				if (segments[digit][i])
				digits[2][position*4+1] = '_';
				break;
			case 4:
				if (segments[digit][i])
				digits[2][position*4+0] = '|';
				break;
			case 5:
				if (segments[digit][i])
				digits[1][position*4+0] = '|';
				break;
			case 6:
				if (segments[digit][i])
				digits[1][position*4+1] = '_';
				break;
		}
}

// just print the array and do new line if row changes
void
print_digits_array(void)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < MAX_DIGITS*4; j++)
			putchar(digits[i][j]);
		putchar('\n');
	}
}
