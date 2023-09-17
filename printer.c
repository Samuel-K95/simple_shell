#include "main.h"

/**
 * _puts - Prints a string
 * @str: Pointer to the string to print
 *
 * Return: void
 */
void prints(char *str)
{
	int i = 0;
	
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}
