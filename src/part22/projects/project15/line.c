#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "line.h"

#define MAX_LINE_LEN 60

char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;
bool more_space_toggle = false;

void clear_line(void)
{
	line[0] = '\0';
	line_len = 0;
	num_words = 0;
}

void add_word(const char *word)
{
	if (num_words > 0) {
		line[line_len] = ' ';
		line[line_len+1] = '\0';
		line_len++;
	}

	strcat(line, word);
	line_len += strlen(word);
	num_words++;
}

int space_remaining(void)
{
	return MAX_LINE_LEN - line_len;
}

void write_line(FILE *fdst) {

    int extra_spaces, spaces_to_insert, i, j;
    more_space_toggle = !more_space_toggle;

    extra_spaces = MAX_LINE_LEN - line_len;
    for (i = 0; i < line_len; i++) {
        if (line[i] != ' ')
			fputc(line[i], fdst);
        else {
            spaces_to_insert = extra_spaces / (num_words - 1);
            if (more_space_toggle && extra_spaces > 0) {
                spaces_to_insert++;
                more_space_toggle = !more_space_toggle;
            }
            for (j = 1; j <= spaces_to_insert + 1; j++)
				fputc(' ', fdst);
            extra_spaces -= spaces_to_insert;
            num_words--;
        }
    }
	fputc('\n', fdst);
}

void flush_line(FILE *fdst)
{
	if (line_len > 0)
		fputs(line, fdst);
	fputc('\n', fdst);
}
