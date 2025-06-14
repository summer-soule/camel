/*
 *
 * Task:
 * 		Write a function that, when given a string as its argument,
 * 		searches the following array of structures for a matching
 * 		command name, then calls the function associated with that name.
 *
 * 		struct {
 * 			char *cmd_name;
 * 			void (*cmd_pointer)(void);
 * 		} file_cmd[] =
 * 			{{"new",			new_cmd},
 * 			 {"open",			open_cmd},
 * 			 {"close",			close_cmd},
 * 			 {"close all",		close_all_cmd},
 * 			 {"save",			save_cmd},
 * 			 {"save as",		save_as_cmd},
 * 			 {"save all",		save_all_cmd},
 * 			 {"print",			print_cmd},
 * 			 {"exit",			exit_cmd}
 * 			};
 *
 * Date: 2025-06-14
 * Time: 03:57 AM
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "filecmd.h"

struct {
	char *cmd_name;
	void (*cmd_pointer)(void);
} file_cmd[] =
	{{"new",			new_cmd},
	 {"open",			open_cmd},
	 {"close",			close_cmd},
	 {"close all",		close_all_cmd},
	 {"save",			save_cmd},
	 {"save as",		save_as_cmd},
	 {"save all",		save_all_cmd},
	 {"print",			print_cmd},
	 {"exit",			exit_cmd}
	};

void run_cmd(char *str);

int main(int argc, char *argv[]) {
	for (int i = 0; i < argc; i++)
		run_cmd(argv[i]);

	exit(EXIT_SUCCESS);
}

void run_cmd(char *str) {
	for (int i = 0; i < sizeof(file_cmd)/sizeof(file_cmd[0]); i++)
		if (strcmp(str, file_cmd[i].cmd_name) == 0)
			return (file_cmd[i].cmd_pointer)();
	return;
}
