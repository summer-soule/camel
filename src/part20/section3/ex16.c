/*
 *
 * Task:
 *		Starting with the 386 processor, x86 CPUs have 32-bit registers
 *		named EAX, EBX, ECX, and EDX. The second half (the least
 *		significant bits) of these registers is the same as AX, BX, CX,
 *		and DX, respectively. Modify the regs union so that it includes
 *		these registers as well as the older ones. Your union should be
 *		set up so that modifying EAX changes AX and modifying AX changes
 *		the second half of EAX. (The other new registers will work in a
 *		similar fashion.) You'll need to add some "dummy" members to
 *		the word and byte structures, corresponding to the other half
 *		of EAX, EBX, ECX, and EDX. Declare the type of the new registers
 *		to be DWORD (double word), whoch should be defined as unsigned
 *		long. Don't forget that the x86 architecture is little-endian.
 *
 * Date: 2025-11-20
 * Time: 01:11 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

typedef unsigned char BYTE;
typedef unsigned short WORD;
typedef unsigned int DWORD; // unsigned int is 32-bit long
union {
	struct {
		DWORD eax, ebx, ecx, edx;
    } dword;
	struct {
        WORD axl, axh,
             bxl, bxh,
             cxl, cxh,
             dxl, dxh;
	} word;
	struct {
        BYTE axll, axlh, axhl, axhh,
             bxll, bxlh, bxhl, bxhh,
             cxll, cxlh, cxhl, cxhh,
             dxll, dxlh, dxhl, dxhh;
	} byte;
} regs;

int main(void) {
    regs.dword.eax = 0xFF;
    regs.dword.ebx = 0xEE;
    regs.dword.ecx = 0xDD;
    regs.dword.edx = 0xCC;

    printf("EAX: %d\n", regs.dword.eax);
    printf("EBX: %d\n", regs.dword.ebx);
    printf("ECX: %d\n", regs.dword.ecx);
    printf("EDX: %d\n", regs.dword.edx);

	printf("AXLL: %d\n", regs.byte.axll);
    printf("AXLH: %d\n", regs.byte.axlh);

	exit(EXIT_SUCCESS);
}
