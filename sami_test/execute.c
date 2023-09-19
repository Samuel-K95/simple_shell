#include "main.h"

/**
 * execute_cmd - executes command
 * @UNUSED: to indicate unused
 * Return: int
 */

void execute_cmd(char **args)
{
	int i, kotari = 0;
	char **argv, *comm_path;

	while (args[kotari] != NULL)
		kotari++;

	argv = malloc((kotari + 2) * sizeof(char *));
	if (argv == NULL)
		return;
	comm_path = malloc(_strlen("/bin/") + _strlen(args[0]) + 1);
	_strcpy(comm_path, "/bin/");
	str_concat(comm_path, args[0]);
	argv[0] = comm_path;

	for (i = 0; i < kotari; i ++)
		argv[i+1] = _strdup(args[i]);

	argv[kotari + 1] = NULL;

	execve(argv[0], argv, NULL);
	perror("execve");
	exit(EXIT_FAILURE);
}


/**
 * str_concat - concatenate two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated String
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, count, l1, l2;
	char *dup;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = 0, l2 = 0, count = 0;
	while (s1[i] != '\0')
		l1++,count++;
	while (s2[l2] != '\0')
		l2++, count++;

	dup = malloc(sizeof(char) * count + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		dup[i] = s1[i];
	for (i = 0; i < count + 1; i ++)
		dup[l1 + i] = s2[i];

	return (dup);
}
