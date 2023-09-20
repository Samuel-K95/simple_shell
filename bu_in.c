#include "main.h"


/**
 * shell_mezgat - closes the shell
 * Return: 0
 */

void shell_mezgat(void)
{
	exit(0);
}

/**
 * printenv - prints the current environment
 * @environ: environment variable
 */
void printenv(char **environ)
{
	int i = 0;

	for (; environ[i] ; i++)
		_puts(environ[i]);
}
