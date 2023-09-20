#include "main.h"

/**
 * main - creates a prompt that reads input, splits it, executes, and waits
 *        for another command unless told to exit
 * @ac: number of arguments
 * @av: array of arguments
 * @env: environment variables
 * Return: 0
 */
int main(int ac __attribute__((unused)), char **av, char **env)
{
        char *line;
        char **args;
	struct stat check;
        int kotari = 0, yemejemeryaw_arg_info = 0, mestegabir = 0, tezega = 0;
        (void)av;
        signal(SIGINT, handle_signal);

        for (; tezega != -1;)
        {
		mestegabir = isatty(0);
                prompt();
<<<<<<< HEAD
                line = read_input();
                args = split_str(line, env);

=======
                line = read_input(mestegabir);
		if (_strcmp(line, "exit") == 0)
			tezega = -1;
		else
		{
                args = split_str(line);
>>>>>>> 767f96f382d6f8f4d6a563ca6135fb9b9d1708ac
                if ((_strcmp(args[0], "\n") != 0) && (_strcmp(args[0], "env") != 0))
                {
                        kotari++;
                        yemejemeryaw_arg_info = stat(args[0], &check);
                        execute_cmd(av, args, env, yemejemeryaw_arg_info);
                }
                else
                {
                        free(args);
                }
		}
                free(line);
		
        }

        return 0;
}
