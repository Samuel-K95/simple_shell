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
extern char **environ;

/* basic functions  */
int _putchar(char c);
void prints(char *str);
char *str_concat(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
int _strlen(const char *s);
int _strcmp(char *s1, char *s2);
char *_strstr(char *str1, char *str2);
char *_strdup(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_itoa(int num, int base);
int _atoi(char *a);
/*essential functions */

char **split_str(char *line, char **env);
void prompt(void);
char *read_input();
void printenv(char **environ);
void _puts(char *str);

/*process */

int execute_cmd(char **av, char **args, char **environ, int ymh, int kotari);
char **search(char **environ);
char **_which(char *fpath);

/*signal */

void handle_signal(int signal);
int _stat(char **cmd, char **menged);
int *_error(char *argv, int count, char *args);


/*memory */
void *_calloc(unsigned int nmemb, unsigned int size);

#endif /* MAIN_H */
