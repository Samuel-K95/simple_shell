#include "main.h"
/**
 * _strchr - search for foirst occurence of
 * @s: string to be searched in
 * @c: character to be searched
 * Return: pointer to first occurence
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s);
		i++;
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
