#include "main.h"

/* implement a code that stores what ever  if it is stdin */

char *read_input(void)
{
	char *line = NULL;
        size_t buf_size = 100;
	int bytes_read;

	bytes_read = getline(&line, &buf_size, stdin);
	line[bytes_read - 1] = '\0';
        if (bytes_read == -1)
	{
		prints("getline failed\n");
		_exit(EXIT_FAILURE);
	}
                
	return (line);

}

