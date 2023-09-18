#include "main.h"

/**
 * split_str - splits string
 * @line: string to be tokenized
 * Return: line of string
 */

char **split_str(char *line)
{
	char *tokenized_sentence, *separator = " ";
	char **kalat, **addis_token;
	int i, max_tokens = 10, kotari = 0;

	kalat = malloc(sizeof(char *) * max_tokens);
	if (kalat == NULL)
		return (NULL);
	tokenized_sentence = strtok(line, separator);
	while (tokenized_sentence != NULL)
	{
		if (kotari >= max_tokens)
		{
			max_tokens *= 2;
			addis_token = malloc(sizeof(char *) * max_tokens);
			if (addis_token == NULL)
			{
				for (i = 0; i < kotari; i++)
					free(kalat[i]);
				free(kalat);
				return (NULL);
			}
			_memcpy(addis_token, kalat, sizeof(char *) * kotari);

			free(kalat);
			kalat = addis_token;
		}
		kalat[kotari] = malloc(_strlen(tokenized_sentence) + 1);
		if (kalat[kotari] == NULL)
		{
			for (i = 0; i < kotari; i++)
				free(kalat[i]);
			free(kalat);
			return (NULL);
		}
		_strcpy(kalat[kotari], tokenized_sentence);
		kotari++;
		tokenized_sentence = strtok(NULL, separator);
	}
	kalat[kotari] = NULL;
	return (kalat);
}
