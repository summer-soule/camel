/*
 *
 * Project 2.
 *
 * Task:
 *		Modify the fustify program of Section 15.3 by having the
 *		read_word function (instead of main) store the * character
 *		at the end of a word that's been truncated.
 *
 * Date: 2025-05-13
 * Time: 00:32 AM
 *
 */

#include "line.h"
#include "word.h"



int main(void) {
	char word[MAX_WORD_LEN+2];
    int word_len;
        
	clear_line();
	for (;;) {
		read_word(word, MAX_WORD_LEN+1, &word_len);

		if (word_len == 0) {
			flush_line();
			return 0;
		}

		if (word_len + 1 > space_remaining()) {
			write_line();
			clear_line();
		}

		add_word(word);
	}
}
