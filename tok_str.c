#include "main.h"

void handle_exit(char **kalat, char *line);

/**
 * split_str - splits string
 * @line: string to be tokenized
 * @env: environment variables
 *
 * Return: array of tokens
 */
char **split_str(char *line, char **env)
{
	char *tokenized_sentence, *separator = " \t\r\n\a";
	char **kalat;
	int max_kalat = 64, kotari = 0;

	if (line == NULL)
	{
		return (0);
	}
	kalat = _calloc(sizeof(char *), max_kalat);
	if (kalat == NULL)
	{
		prints("error");
		exit(EXIT_FAILURE);
	}

	tokenized_sentence = strtok(line, separator);
	while (tokenized_sentence != NULL)
	{
		kalat[kotari] = tokenized_sentence;
		kotari++;
		tokenized_sentence = strtok(NULL, separator);
	}

	if (kalat[0] == NULL)
		kalat[kotari] = "\n";

	if (_strcmp(kalat[0], "exit") == 0)
	{
		if (kalat[1] != NULL)
			handle_exit(kalat, line);

		else
			handle_exit(kalat, line);
	}
	if ((_strcmp(kalat[0], "env") == 0) && kalat[1] == NULL)
		printenv(env);

	return (kalat);

}


/**
 * handle_exit - exit handler
 * @kalat:  kalat which is nice
 * @line: line line in the mirrori
 * Returns: nothing
 *
 */

void handle_exit(char **kalat, char *line)
{
	int status = 0;

	if (kalat[1] != NULL)
		status = atoi(kalat[1]);
	free(line);
	free(kalat);
	exit(status);
}
