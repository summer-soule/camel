/*
 *
 * Task:
 *		What are the integer values of the enumeration constants
 *		in each of the following declarations?
 *
 *		(a)	enum {NUL, SOH, STX, ETX};
 *		(b)	enum {VT = 11, FF, CR};
 *		(c)	enum {SO = 14, SI, DLE, CAN = 24, EM};
 *		(d)	enum {ENQ = 45, ACK, BEL, LF = 37, ETB, ESC};
 *
 * Date: 2025-05-19
 * Time: 05:07 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>

enum {NUL, SOH, STX, ETX};
enum {VT = 11, FF, CR};
enum {SO = 14, SI, DLE, CAN = 24, EM};
enum {ENQ = 45, ACK, BEL, LF = 37, ETB, ESC};

int main(void) {
	printf("NUL: %d\nSOH: %d\nSTX: %d\nETX: %d\n", NUL, SOH, STX, ETX);
	printf("VT: %d\nFF: %d\nCR: %d\n", VT, FF, CR);
	printf("SO: %d\nSI: %d\nDLE: %d\nCAN: %d\nEM: %d\n", SO, SI, DLE, CAN, EM);
	printf("ENQ: %d\nACK: %d\nBEL: %d\nLF: %d\nETB: %d\nESC: %d\n",
		   ENQ, ACK, BEL, LF, ETB, ESC);
	
	exit(EXIT_SUCCESS);
}
