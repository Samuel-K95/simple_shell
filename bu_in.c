#include "main.h"

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
