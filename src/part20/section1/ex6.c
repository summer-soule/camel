/*
 *
 * Task:
 *		(a) Use the bitwise operators to write the following function:
 *
 *		unsigned short swap_bytes(unsigned short i);
 *
 *		swap_bytes should return the number that results from swapping
 *		the two bytes in i. (Short integers occupy two bytes on most
 *		computers.) For example, if i has the value 0x1234
 *		(00010010 00110100 in binary), then swap_bytes should return
 *		0x3412 (00110100 00010010 in binary). Test your function by
 *		writing a program that reads a number in hexadecimal, then
 *		writes the number with its bytes swapped:
 *
 *		Enter a hexadecimal number (up to four digits): 1234
 *		Number with bytes swapped: 3412
 *
 *		Hint: Use the %hx conversion to read and write the hex numbers.
 *
 *		(b) Condense the swap_bytes function so that its body
 *		is a single statement.
 *
 * Date: 2025-11-19
 * Time: 09:50 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

unsigned short swap_bytes_a(unsigned short i);
unsigned short swap_bytes_b(unsigned short i);

int main(void) {
	unsigned short input;

	printf("Enter a hexadecimal number (up to four digits): ");
    scanf("%hx", &input);

    printf("(a) Number with bytes swapped: %hx\n", swap_bytes_a(input));
    printf("(b) Number with bytes swapped: %hx\n", swap_bytes_b(input));

	exit(EXIT_SUCCESS);
}

unsigned short swap_bytes_a(unsigned short i) {
    unsigned short low_byte, high_byte, iNew;
    low_byte = i << 8;
    high_byte = i >> 8;
    iNew = low_byte | high_byte;
	return iNew;
}

unsigned short swap_bytes_b(unsigned short i) {
	return (i << 8) | (i >> 8);
}
