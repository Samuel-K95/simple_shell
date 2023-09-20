#include "main.h"

/**
 *_calloc -allocated memoria for nmeb elemn de zise bytes
 *@nmemb: number of element in the array
 *@size: bytes for each position in the array
 *Return: pointer void
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);

}

/**
 *_puts - prints a string
 *@str: A to be printed
 *
 *Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
