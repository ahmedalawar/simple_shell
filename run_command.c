#include "shell.h"
/**
*run_command - function that run the cmd and make a new process
*@command: string that takes your argument
*/

void run_command(const char *command)
{
	pid_t child_pid = fork();

	if (child_pid == -1)
	{
		perro("fork");
		exit(EXIT_FAILURE);
	}


}
