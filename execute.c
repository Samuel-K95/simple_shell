#include "main.h"

/**
 * execute_cmd - executes a command as a child process
 * @av: array of arguments
 * @args: array of parsed arguments
 * @env: environment variables
 * @yemain_huneta: status of the main function
 * @kotari: command count
 *
 * Return: 1 on success
 */
int execute_cmd(char **av, char **args, char **env, int yemain_huneta)
{
        pid_t pid;
        int status;

        if (args == NULL)
                return (-1);

        pid = fork();
        if (pid < 0)
        {
                perror("./shell: ");
                exit(1);
        }
        else if (pid == 0)
        {
                if (execve(args[0], args, env) == -1)
                {
                        perror(av[0]);
                        free(args);
                        exit(1);
                }
                exit(0);
        }
        else
        {
                if (yemain_huneta == 1)
                        free(args[0]);

                free(args);
                waitpid(pid, &status, WUNTRACED);
        }
        return (1);
}
