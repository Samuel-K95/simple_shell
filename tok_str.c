#include "main.h"

/**
 * split_str - splits string
 * @line: string to be tokenized
 * Return: line of string
 */

char **split_str(char *line)
{
	char *tokenized_sentence, *separator = " \t\n";
	char **kalat;
	int max_kalat = 10, kotari = 0;
	

	kalat = _calloc(sizeof(char *), max_kalat);
	if (kalat == NULL)
	{
		prints("error\n");
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

	/*implement exit condition */
	
	/*implement enc condition */
	
	return (kalat);
}
