#include "main.h"

/**
 * read_input - stores whatever is passed to it as standard input
 *
 * Return: string containing the input
 */
char *read_input(void)
{
	char *line = NULL;
	ssize_t bytes_read;
	size_t bufsize;
	int i;

	bufsize = 0;
	bytes_read = getline(&line, &bufsize, stdin);
	if (!line)
	{
		perror("Error allocating memory for buffer");
		return (0);
	}
	if (bytes_read == 1)
	{
		free(line);
		return (NULL);
	}
	else if (bytes_read == EOF)
	{
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		free(line);
		exit(0);
	}
	else
	{
		for (i = 0; line[i] == ' ' && line[i + 1] == ' '; i++)
			;
		if (!line[i] && line[i + 1] == '\n')
		{
			free(line);
			return (0);
		}
	}

	return (line);
}
