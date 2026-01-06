#include "word.h"

int read_char(FILE *fsrc)
{
	int ch = fgetc(fsrc);

	if (ch == '\n' || ch == '\t')
		return ' ';
	return ch;
}

void read_word(char *word, int len, FILE *fsrc)
{
	int ch, pos = 0;

	while ((ch = read_char(fsrc)) == ' ')
		;
	while (ch != ' ' && ch != EOF) {
		if (pos < len)
			word[pos++] = ch;
		ch = read_char(fsrc);
	}
	word[pos] = '\0';
}
