#include "main.h"

/**
 * read_input - reads user input
 * Return: string
 */

char *read_input(void)
{
	char *line = NULL;
	size_t buf_size;
	int bytes_read, i = 0;

	bytes_read = getline(&line, &buf_size, stdin);

	if (bytes_read == 1)
	{
		free(line);
		return (NULL);
	}
	else if (bytes_read == EOF)
	{
		if (isatty(STDIN_FILENO))
			prints("\n");
		free(line);
		exit(0);
	}
	else
	{
		while (line[i] == ' ' && line[i + 1] == ' ')
		{
			i++;
		}

		if (!line[i] && line[i + 1] == '\n')
		{
			free(line);
			return 0;
		}
	}	

	return (line);

}
