#include "main.h"

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
	int max_kalat = 10, kotari = 0;

	kalat = _calloc(sizeof(char *), max_kalat);
	if (line == NULL)
	{
		return (0);
	}
	if (kalat == NULL)
	{
		printf("error\n");
		exit(EXIT_FAILURE);
	}

	tokenized_sentence = strtok(line, separator);
	while (tokenized_sentence != NULL)
	{
		kalat[kotari] = _strdup(tokenized_sentence);
		kotari++;
		tokenized_sentence = strtok(NULL, separator);
	}

	if (kalat[0] == NULL)
		kalat[kotari] = "\n";

	if ((_strcmp(kalat[0], "exit") == 0) && kalat[1] == NULL)
	{
		free(line);
		free(kalat);
		exit(0);
	}

	if ((_strcmp(kalat[0], "env") == 0) && kalat[1] == NULL)
		printenv(env);

	return (kalat);
}
