#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/wait.h>

#define UNUSED __attribute__((unused));
/* basic functions  */
int _putchar(char c);
void prints(char *str);
char *_strcat(char *dest, char *src);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
char *_strstr(char *str1, char *str2);
char *_strdup(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
/*essential functions */

char **split_str(char *line, char **env);
void prompt(void);
char *read_input(int mestegabir);
int execute_cmd(char **av, char **args, char **env, int yemain_huneta);
void shell_mezgat(void);
void printenv(char **environ);
void _puts(char *str);

/*signal */
void handle_signal(int signal);

/*memory */
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
