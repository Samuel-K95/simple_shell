#include "main.h"

void betty_zmbey(void);

/**
 * main - driver function
 * Return: 0
 */

int main(void)
{
	int status, mezgat_flag = 0;
	char *args[2], *line = malloc(sizeof(char) * 102);
	pid_t pid;

	if (line == NULL)
	{
		perror("malloc failed\n");
		exit(EXIT_FAILURE);
	}
	for (; mezgat_flag != -1;)
	{
		if (_strcmp(line, "exit") == 0)
			mezgat_flag = shell_mezgat();
		else
		{
<<<<<<< HEAD
			prompt();
			line = read_input();
			pid = fork();
			if (pid == -1)
			{
				prints("fork failed\n");
				_exit(EXIT_FAILURE);
			}
			else if (pid == 0)
			{
				if (_strcmp(line, "exit") == 0)
					mezgat_flag = shell_mezgat();
				else
				{
					args[0] = line;
					args[1] = NULL;
					execve(line, args, NULL);
					betty_zmbey();
				}
			}
			wait(&status);
=======
			args[0] = line;
			args[1] = NULL;
			execve(line, args, NULL);
			prints("./shell: No such file or directory\n");
			_exit(EXIT_FAILURE);
>>>>>>> 58d78d48a7e5ddd320fadddc92e1e2a1626dc9f2
		}
	}
	free(line);
	return (0);
}

/**
 * betty_zmbey - exits
 * Return: void
 */

void betty_zmbey(void)
{
	prints("./shell: No such file or directory\n");
	_exit(EXIT_FAILURE);
}
