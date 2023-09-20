#include "main.h"

/**
 * read_input - reads user input
 * Return: string
 */

char *read_input(void)
{
	char *line = NULL;
	size_t buf_size;
	int bytes_read;

	bytes_read = getline(&line, &buf_size, stdin);

	if (bytes_read == 1)
	{
		free(line);
		return (NULL);
	}
	else if (bytes_read == EOF)
	{
		prints("\n");
		free(line);
		exit(0);
	}

	return (line);

}
