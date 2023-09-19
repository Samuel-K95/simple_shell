#include "main.h"

/**
 * try_comm_exec - trying command execution
 * @mesmer: string of command
 * Return: void
 */

void try_comm_exec(char *mesmer)
{
	int alew, args, i;
	const char *divider;
	char *kalat, *arguments, *kal_dup;
	char *comm_mesmer[256];

	alew = _strchr(mesmer, '/') != NULL;
	args = 0;
	divider = " ";
	arguments = malloc(sizeof(char *) * 128);
	kal_dup = malloc(_strlen(mesmer) + 1);
	_strcpy(kal_dup, mesmer);

	kalat = strtok(kal_dup, divider);

	for (; kalat != NULL; strtok(NULL, divider))
	{
		arguments[args] = malloc(sizeof(char) * _strlen(kalat) + 1);
		_strcpy(arguments[args], kalat);
		args++;
	}
	arguments[args] = NULL;
	free(kal_dup);

	if (args > 0)
	{
		if (alew)
			execve(arguments[0], arguments, NULL);
		else
		{
			_strcpy(comm_mesmer, "/bin/");
			str_concat(comm_mesmer, arguments[0]);
			execve(comm_mesmer, arguments, NULL);
		}
		perror("execve");
	}
	for (i = 0; i < args; i++)
		free(arguments[i]);
	free(arguments);
}

