#include "main.h"

/**
 * execute_cmd - executes command
 * @UNUSED: to indicate unused
 * Return: int
 */

void execute_cmd(char **args)
{
	int i, kotari = 0;
	char **argv;

	while (args[kotari] != NULL)
		kotari++;

	argv = malloc((kotari + 2) * sizeof(char *));
	if (argv == NULL)
		return (-1);
	argv[0] = _strdup("/bin/");

	for (i = 0; i < kotari; i++)
		argv[i+1] = args[i];

	argv[kotari + 1] = NULL;

	execve(argv[0], argv, NULL);
	perror("execve");
	exit(EXIT_FAILURE);
}

