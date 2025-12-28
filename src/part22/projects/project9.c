/*
 *
 * Project 9.
 *
 * Task:
 *		Write a program that merges two files containing part records
 *		stored by the inventory.c program (see Programming Project 8).
 *		Assume that the records in each file are sorted by part number,
 *		and that we want the resulting file to be sorted as well.
 *		If both files have a part with the same number, combine the
 *		quantities stored in the records. (As a consistency check,
 *		have the program compare the part names and print an error
 *		message if the don't match.) Have the program obtain the names
 *		of the input files and the merged file from the command line.
 *
 * Date: 2025-12-27
 * Time: 11:09 AM
 *
 */

#include <linux/limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAME_LEN 25
#define MAX_PARTS 100

typedef struct {
	int number;
	char name[NAME_LEN+1];
	int on_hand;
} part;

int num_parts = 0;


void usage(char *);
int compar(const void*, const void*);
part *dup_rm(part *arr1, int size1, part *arr2, int size2, int *result_size);

int main(int argc, char *argv[]) {
	FILE *fsrc1, *fsrc2, *fdst;
	int parts1, parts2, parts3;
	part inv1[MAX_PARTS], inv2[MAX_PARTS], *inv3;
	char *fdstname = "merged.dat";

	if (argc != 3) {
		usage(argv[0]);
		exit(EXIT_FAILURE);
	}

	if ((fsrc1 = fopen(argv[1], "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if ((fsrc2 = fopen(argv[2], "r")) == NULL) {
		fprintf(stderr, "main: can't open %s file\n", argv[2]);
		exit(EXIT_FAILURE);
	}

	if ((fdst = fopen(fdstname, "w+")) == NULL) {
		fprintf(stderr, "main: can't create or open %s out file\n", fdstname);
		exit(EXIT_FAILURE);
	}

	// get data from files
    parts1 = fread(&inv1, sizeof(part), MAX_PARTS, fsrc1);
    parts2 = fread(&inv2, sizeof(part), MAX_PARTS, fsrc2);

	// check for bounds
    if ((parts1 + parts2) > MAX_PARTS) {
		fprintf(stderr, "main: too many parts\n");
		exit(EXIT_FAILURE);
    }

	// merge
	inv3 = dup_rm(inv1, parts1, inv2, parts2, &parts3);
	if (fwrite(inv3, parts3, sizeof(part), fdst) == 0) {
		fprintf(stderr, "main: no parts written\n");
		exit(EXIT_FAILURE);
	}

    free(inv3);

    exit(EXIT_SUCCESS);
}

void usage(char *progname) {
	printf("Usage: %s file1.dat file2.dat\n", progname);
}

int compar(const void* a, const void* b) {
	return ((part*)a)->number - ((part*)b)->number;
}

part *dup_rm(part *arr1, int size1, part *arr2, int size2, int *result_size) {
	// sort things first
	qsort(arr1, size1, sizeof(part), compar);
	qsort(arr2, size2, sizeof(part), compar);

    part *arr3 = malloc((size1 + size2) * sizeof(part));

	// check for equal parts and merge or write them to arr3
	int i = 0;
	int j = 0;
	int k = 0;
	while (i < size1 && j < size2) {
		if (arr1[i].number < arr2[j].number) {
			arr3[k++] = arr1[i++];
		} else if (arr1[i].number > arr2[j].number) {
			arr3[k++] = arr2[j++];
		} else {
			// differnet names for same part number
			if (strcmp(arr1[i].name, arr2[j].name) != 0) {
				fprintf(stderr, "dup_rm: Warning: different names for same number %d: '%s' vs '%s'\n",
						arr1[i].number, arr1[i].name, arr2[i].name);
			}
			arr3[k] = arr1[i];
			arr3[k++].on_hand = arr1[i++].on_hand + arr2[j++].on_hand;
		}
	}
	// add remaining elements
	while (i < size1) arr3[k++] = arr1[i++];
	while (j < size2) arr3[k++] = arr2[j++];

	*result_size = k;

	// return arr3 pointer
	return realloc(arr3, k * sizeof(part));
}
