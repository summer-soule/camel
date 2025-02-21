/* 
 *
 * Project 4.
 *
 * Task: Write a program that translates an alphabetic phone number into
 * numeric form:
 *
 * Enter phone number: CALLATT
 * 2255288
 *
 * (In case you don't have a telephone nearby, here are the letters on the
 * keys: 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV, 9=WXY.) If the
 * original phone number contains nonalphabetic characters (digits or 
 * punctuation, for example), leave them unchanged:
 *
 * Enter phone number: 1-800-COL-LECT
 * 1-800-265-5328
 *
 * You may assume that any letters entered by the user are upper case.
 *
 * Date: 2025-02-19
 * Time: 2:23 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int ch;

	printf("Enter phone number: ");
	
	while ( (ch = getchar()) != '\n') {
		switch(ch) {
			case '-':
				putchar('-');
				break;
			case '0':
				putchar('0');
				break;
			case '1':
				putchar('1');
				break;
			case 'A': case 'B': case 'C': case '2':
				putchar('2');
				break;
			case 'D': case 'E': case 'F': case '3':
				putchar('3');
				break;
			case 'G': case 'H': case 'I': case '4':
				putchar('4');
				break;
			case 'J': case 'K': case 'L': case '5':
				putchar('5');
				break;
			case 'M': case 'N': case 'O': case '6':
				putchar('6');
				break;
			case 'P': case 'R': case 'S': case '7':
				putchar('7');
				break;
			case 'T': case 'U': case 'V': case '8':
				putchar('8');
				break;
			case 'W': case 'X': case 'Y': case '9':
				putchar('9');
				break;
		}
	}
	putchar('\n');

	exit(EXIT_SUCCESS);
}
