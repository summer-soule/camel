/* 
 *
 * Task: Use typeof to create types named Int8, Int16, and Int32. Define
 * the types so that they represent 8-bit, 16-bit, and 32-bit integers
 * on your machine.
 *
 * Date: 2025-02-19
 * Time: 1:08 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	typedef char Int8;
	typedef int Int16;
	typedef long Int32;

	Int8 i8 = 0xF;
	Int16 i16 = 0xFF;
	Int32 i32 = 0xFFFF;

	printf("i8 = %d\n", i8);
	printf("i16 = %d\n", i16);
	printf("i32 = %ld\n", i32);

	exit(EXIT_SUCCESS);
}
