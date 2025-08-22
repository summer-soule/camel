
/*
 *
 * Task:
 *		For each of the following declarations, identify the storage
 *		class. type qualifiers, type specifiers, declarators, and
 *		initializers.
 *
 *		(a) static char **lookup(int level);
 *
 *			storage class: static
 *			type qualifiers: none
 *			type specifiers: char
 *			declarators: **lookup
 *			initializers: none
 *
 *		(b) volatile unsigned long io_flags;
 *
 *			storage class: extern
 *			type qualifiers: volatile
 *			type specifiers: unsigned long
 *			declarators: io_flags
 *			initializers: none
 *
 *		(c) extern char *file_name[MAX_FILES], path[];
 *
 *			storage class: auto
 *			type qualifiers: none
 *			type specifiers: char
 *			declarators: *file_name[MAX_FILES], path[]
 *			initializers: none
 *
 *		(d) static const char token_buf[] = "";
 *
 *			storage class: static
 *			type qualifiers: const
 *			type specifiers: char
 *			declarators: token_buf[]
 *			initializers: ""
 *
 * Date: 2025-07-28
 * Time: 01:20 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	printf("static char **lookup(int level);\n\
		\tstorage class: static\n\
		\ttype qualifiers: none\n\
		\ttype specifiers: char\n\
		\tdeclarators: **lookup(int level)\n\
		\tinitializers: none\n\n");
    
	printf("volatile unsigned long io_flags;\n\
		\tstorage class: extern\n\
		\ttype qualifiers: volatile\n\
		\ttype specifiers: unsigned long\n\
		\tdeclarators: io_flags\n\
		\tinitializers: none\n\n");

    printf("extern char *file_name[MAX_FILES], path[];\n\
		\tstorage class: extern\n\
		\ttype qualifiers: none\n\
		\ttype specifiers: char\n\
		\tdeclarators: *file_name[MAX_FILES], path[]\n\
		\tinitializers: none\n\n");

    printf("static const char token_buf[] = "";\n\
		\tstorage class: static\n\
		\ttype qualifiers: const\n\
		\ttype specifiers: char\n\
		\tdeclarators: token_buf[]\n\
		\tinitializers: ""\n\n");    

	exit(EXIT_SUCCESS);
}
