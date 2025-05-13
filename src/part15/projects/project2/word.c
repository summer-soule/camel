#include <stdio.h>
#include <string.h>
#include "word.h"

int read_char(void)
{
	int ch = getchar();

	if (ch == '\n' || ch == '\t')
		return ' ';
	return ch;
}

void read_word(char *word, int len, int *wlen)
{
	int ch, pos = 0;

	while ((ch = read_char()) == ' ')
		;
	while (ch != ' ' && ch != EOF) {
		if (pos < len)
			word[pos++] = ch;
		ch = read_char();
        }
    
	*wlen = strlen(word);
        
    if (*wlen > MAX_WORD_LEN)
		word[MAX_WORD_LEN] = '*';
    else
		word[pos] = '\0';
}
