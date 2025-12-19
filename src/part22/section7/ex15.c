/*
 *
 * Task:
 *		Write calls of fseek that perform the following file-positioning
 *		operations on a binary file whose data is arranged in 64-byte
 *		"records". Use fp as the file pointer in each case.
 *
 *		(a) Move to the beginning of record n. (Assume that the first record
 *			in the file is record 0.)
 *		(b) Move to the beginning of the last record in the file.
 *		(c) Move forward one record.
 *		(d) Move backward two records.
 *
 * Date: 2025-12-15
 * Time: 04:52 PM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#define RECORDS_NUM 64

struct record64 {
	int64_t item[8];
};

int main(void) {
	FILE *fp;
	struct record64 record[RECORDS_NUM];
	int64_t rrecord;
	int i, j, n;

	if ((fp = tmpfile()) == NULL) {
		fprintf(stderr, "tmpfile: can't open temporary file\n");
		exit(EXIT_FAILURE);
	}

    for (i = 0; i < 64; i++)
		for (j = 0; j < 8; j++)
			record[i].item[j] = i;

	fwrite(record, sizeof(struct record64), RECORDS_NUM, fp);

	// (a) go to the begginning of record n (first in next example)
	n = 0;
	fseek(fp, n * 64L, SEEK_SET);
    fread(&rrecord, sizeof(int64_t), 1, fp);
	printf("first record: %ld\n", rrecord);

    // (b) move to the begginning of the last record in the file
    fseek(fp, -64L, SEEK_END);
	fread(&rrecord, sizeof(int64_t), 1, fp);
	printf("last record: %ld\n", rrecord);

	// (c) move forward one record
	n = 31;
	fseek(fp, n * 64L, SEEK_SET);
	fseek(fp, 64L, SEEK_CUR);
	fread(&rrecord, sizeof(int64_t), 1, fp);
	printf("record[%ld]: %ld\n", ftell(fp) / 64, rrecord);

	// (d) move backward two records
	fseek(fp, 2 * -64L, SEEK_CUR);
	fread(&rrecord, sizeof(int64_t), 1, fp);
	printf("record[%ld]: %ld\n", ftell(fp) / 64, rrecord);

	exit(EXIT_SUCCESS);
}
