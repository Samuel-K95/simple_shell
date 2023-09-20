#include "main.h"

/**
 * _strlen - returns a string
 * @s: integer to be used
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return ((i + 1));
}

/**
 * *_strcpy - copies a string pointed to by src to dest
 * @src: variale where string will be copied from
 * @dest: variable that string will be copied to
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int p;

	for (p = 0; src[p] != '\0'; p++)
	{
		dest[p] = src[p];
	}
	dest[p] = '\0';

	return (dest);
}

/**
 * _memcpy - copies bytes from src to dest
 *
 * @dest: memory to be transfereed to
 * @src: memory to be transferred from
 * @n: number of bytes to be transfered
 * Return:dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}

	return (dest);
}

/**
 * _strdup - copies string and returns its pointer
 *
 * @str: string to be copied
 * Return: String
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int i, count;

	i = 0;
	count = 0;
	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
		count++;
	}
	count++;
	dup = malloc(sizeof(char) * count);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < sizeof(char) * count; i++)
		dup[i] = str[i];

	return (dup);
}
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int s;

	s = 0;
	while (s1[s] != '\0' && s2[s] != '\0')
	{
		if (s1[s] != s2[s])
			return (s1[s] - s2[s]);

		s++;
	}

	return (0);
}
