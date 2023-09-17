#include "main.h"


int main(void)
{
	int status;
	char *line = NULL;
	size_t buf_size = 100;
	pid_t pid;
	char *args[2];

	line = malloc(buf_size + 1);
	if (line == NULL)
	{
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (1)
	{
		prompt();
		line = read_input();
		/* tommorow task idea
		 *separates string to get command and atgs
	 	 * args = split_str(line, env);
		 * executetion 
		 * */

		pid = fork();
		if (pid == -1)
		{
			prints("fork failed\n");
			_exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			args[0] = line;
			args[1] = NULL;
			execve(line, args, NULL);
			prints("./shell: No such file or directory\n");
			_exit(EXIT_FAILURE);
		}
		wait(&status);
	}
	free(line);

	return(0);
}
