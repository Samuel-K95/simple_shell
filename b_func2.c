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

/**
 * search_path - gets the path to execute commands
 * @environ: Environment variable
 * Return: kalat_path (array of directories containing the command) or NULL on failure
 **/
char **search(char **environ)
{
    int position = 0;
    char **kalat_path;

    for (; environ[position] != NULL ; position++)
    {
        if (environ[position][0] == 'P' && environ[position][2] == 'T')
        {
            kalat_path = _which(environ[position]);
        }
    }
    return (kalat_path);
}

/**
 * _itoa - converts an integer to ASCII
 * @num: number
 * @base: base
 * Return: character string
 **/
char *_itoa(int num, int base)
{
    static char *digits = "0123456789abcdef";
    static char buffer[50];
    char sign = 0;
    char *ptr;
    unsigned long n = (unsigned long)num;

    if (num < 0)
    {
        n = (unsigned long)(-num);
        sign = '-';
    }

    ptr = &buffer[49];
    *ptr = '\0';

    do
    {
        *--ptr = digits[n % base];
        n /= base;
    } while (n != 0);

    if (sign)
        *--ptr = sign;

    return (ptr);
}

/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
        char *dest;
        unsigned int i, j, size;

        /* If the array is empty */
        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        /* Count total size */
        size = (_strlen(s1) + _strlen(s2) + 1);

        /* Allocate memory */
        dest = (char *) malloc(size * sizeof(char));

        if (dest == 0)
        {
                return (NULL);
        }

        /* Concatenate arrays */
        for (i = 0; *(s1 + i) != '\0'; i++)
                *(dest + i) = *(s1 + i);

        for (j = 0; *(s2 + j) != '\0'; j++)
        {
                *(dest + i) = *(s2 + j);
                i++;
        }
        dest[i] = '\0';

        return (dest);
}
