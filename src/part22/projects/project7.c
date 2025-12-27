/*
 *
 * Project 7.
 *
 * Task:
 *		Of the many techniques for compressing the contents of a file,
 *		one of the simplest and fastest is known as run-length encoding.
 *		This technique compresses a file by replacing sequences of
 *		identical bytes by a pair of bytes: a repetition count followed
 *		by a byte to be repeated. For example, suppose that the file to
 *		be compressed begins with the following sequence of bytes
 *		(shown in hexadecimal):
 *
 *		46 6F 6F 20 62 61 72 21 21 21 20 20 20 20 20
 *
 *		The compressed file will contain the following bytes:
 *
 *		01 46 02 4F 01 20 01 62 01 61 01 72 03 21 05 20
 *
 *		Run-length encoding works well if the original file contains
 *		many long sequences of identical bytes. In the worst case
 *		(a file with no repeated bytes), run-length encoding can
 *		actually double the length of the file.
 *
 *		(a) Write a program named compress_file that uses run-length
 *			encoding to compress a file. To run compress_file,
 *			we'd use a command of the form
 *
 *			compress_file original-file
 *
 *			compress_file will write the compressed version of
 *			original-file to original-file.rle.
 *
 *			For example, the command
 *
 *			compress_file foo.txt
 *
 *			will cause compress_file to write a compressed version of
 *			foo.txt to a file named foo.txt.rle.
 *
 *			Hint: The program described in Programming Project 6 could
 *			be useful for debugging.
 *
 *		(b) Write a program named uncompress_file that reverses the
 *			compression performed by the compress_file program.
 *			The uncompress_file command will have the form
 *
 *			uncompress_file compressed-file
 *
 *			compressed-file should have the extension .rle.
 *			For example, the command
 *
 *			uncompress_file foo.txt.rle
 *
 *			will cause uncompress_file to open the file foo.txt.rle
 *			and write an uncompressed version of its contents to
 *			foo.txt. uncompress_file should display an error message
 *			if its command-line argument doesn't end with the .rle extension.
 *
 * Date: 2025-12-21
 * Time: 06:11 PM
 *
 */

#define _POSIX_C_SOURCE 200112L

#include <stdio.h>
#include <stdlib.h>
#include <linux/limits.h>
#include <unistd.h>
#include <string.h>

#define BYTE unsigned char

void compress_file(FILE *);
void uncompress_file(FILE *);

char *recover_filename(FILE *);

void usage(void);

int main(int argc, char *argv[]) {
	FILE *fp;
	char optchar;
	char *options = "hc:x:";

	if (argc > 3 || argc == 1) {
		usage();
		exit(EXIT_FAILURE);
	}

	optchar = getopt(argc, argv, options);

    switch (optchar) {
    case 'h':
        usage();
        exit(EXIT_SUCCESS);
    case 'c':
        if ((fp = fopen(optarg, "r")) == NULL) {
            fprintf(stderr, "main: failed to open %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
        compress_file(fp);
		fclose(fp);
        break;
    case 'x':
        if ((fp = fopen(optarg, "r")) == NULL) {
            fprintf(stderr, "main: failed to open %s\n", argv[1]);
            exit(EXIT_FAILURE);
        }
        uncompress_file(fp);
		fclose(fp);
        break;
    }

	exit(EXIT_SUCCESS);
}

char *recover_filename(FILE *fp) {
	int fd;
	char fd_path[PATH_MAX];
	char *filename = malloc(PATH_MAX);
	ssize_t n;

	fd = fileno(fp);
	sprintf(fd_path, "/proc/self/fd/%d", fd);
	n = readlink(fd_path, filename, PATH_MAX);

    if (n < 0)
		return NULL;

	filename[n] = '\0';
	return filename;
}

void compress_file(FILE *fsrc) {
	FILE *fdst;
	char *dstname;

	if ((dstname = recover_filename(fsrc)) == NULL) {
		fprintf(stderr, "compress_file: can't recover src file name\n");
		exit(EXIT_FAILURE);
	}

	dstname[strlen(dstname)-3] = '\0';
	strcat(dstname, "rly");

	if ((fdst = fopen(dstname, "w+")) == NULL) {
		fprintf(stderr, "compress_file: can't open %s file\n", dstname);
		exit(EXIT_FAILURE);
	}

	BYTE byte, pbyte;
    BYTE bcount = 0;

	fread(&pbyte, sizeof(BYTE), 1, fsrc);
	bcount++;
    while (fread(&byte, sizeof(BYTE), 1, fsrc) > 0
           && !feof(fsrc)) {
		if (byte == pbyte) {
			bcount++;
			continue;
		} else {
			fwrite(&bcount, sizeof(BYTE), 1, fdst);
			fwrite(&pbyte, sizeof(BYTE), 1, fdst);
			pbyte = byte;
			bcount = 1;
		}
	}
	fwrite(&bcount, sizeof(BYTE), 1, fdst);
	fwrite(&pbyte, sizeof(BYTE), 1, fdst);

	fclose(fdst);
}

void uncompress_file(FILE *fsrc) {
	FILE *fdst;
	char *dstname;

	if ((dstname = recover_filename(fsrc)) == NULL) {
		fprintf(stderr, "uncompress_file: can't recover src file name\n");
		exit(EXIT_FAILURE);
	}

	if (!strcmp(dstname+(strlen(dstname)-3), ".rly")) {
		fprintf(stderr, "uncompress_file: src file's extension must be \".rly\"\n");
		exit(EXIT_FAILURE);
	}

	strcpy(dstname+(strlen(dstname)-4), ".txt");

    if ((fdst = fopen(dstname, "w+")) == NULL) {
		fprintf(stderr, "uncompress_file: can't open %s file\n", dstname);
		exit(EXIT_FAILURE);
	}


	BYTE byte, bytecount = 0;
	while (fread(&bytecount, sizeof(BYTE), 1, fsrc) > 0
		   && fread(&byte, sizeof(BYTE), 1, fsrc) > 0
		   && !feof(fsrc)) {
        while (bytecount > 0) {
			fwrite(&byte, sizeof(BYTE), 1, fdst);
			bytecount--;
		}
	}
}

void usage(void) {
	printf("Usage: project7 [option]\n");
	printf("Compress or uncompress file\n");
	printf("\nOptions:\n");
	printf("\t-c\t\tcompress file to .rly\n");
	printf("\t-x\t\tuncompress file to .txt\n");
	printf("\t-h\t\tprint help message\n");
}
