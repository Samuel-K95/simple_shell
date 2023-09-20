#include "main.h"

/**
 * read_input - reads user input
 * Return: string
 */

char *read_input(int mestegabir)
{
	char *line = NULL;
<<<<<<< HEAD
	size_t buf_size;
	int bytes_read, i = 0;
=======
	size_t buf_size = 0;
	int bytes_read;
>>>>>>> 767f96f382d6f8f4d6a563ca6135fb9b9d1708ac


	if (mestegabir == 1)
	{
		if (getline(&line, &buf_size, stdin) == -1)	
			exit(1);
	}
	else
	{
<<<<<<< HEAD
		if (isatty(STDIN_FILENO))
			prints("\n");
		free(line);
		exit(0);
=======

		bytes_read = getline(&line, &buf_size, stdin);
		if (_strcmp(line, "exit") == 0)
			return (line);
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
>>>>>>> 767f96f382d6f8f4d6a563ca6135fb9b9d1708ac
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
