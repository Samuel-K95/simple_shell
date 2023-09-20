#include "main.h"

/**
 * read_input - reads user input
 * Return: string
 */

char *read_input(int mestegabir)
{
	char *line = NULL;
	size_t buf_size = 0;
	int bytes_read;


	if (mestegabir == 1)
	{
		if (getline(&line, &buf_size, stdin) == -1)	
			exit(1);
	}
	else
	{

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
	}

	return (line);

}
