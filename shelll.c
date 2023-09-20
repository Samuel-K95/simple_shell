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
        int kotari = 0, yemejemeryaw_arg_info = 0;
        (void)av;
        signal(SIGINT, handle_signal);

        for (;;)
        {
                prompt();
                line = read_input();
                args = split_str(line);

                if ((_strcmp(args[0], "\n") != 0) && (_strcmp(args[0], "env") != 0))
                {
                        kotari++;
                        yemejemeryaw_arg_info = stat(args, env);
                        execute_cmd(av, args, env, yemejemeryaw_arg_info);/* removed kotar */
                }
                else
                {
                        free(args);
                }
                free(line);
        }

        return 0;
}
