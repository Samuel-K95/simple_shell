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
char **_memcpy(char **dest, char **src, unsigned int n);
char *_strchr(char *s, char c);
char *str_concat(char *s1, char *s2);
/*essential functions */

char **split_str(char *line);
void prompt(void);
char *read_input(void);
void  execute_cmd(char **args);
void try_comm_exec(char *mesmer);
/*signal */
void handle_signal(int signal);


#endif /* MAIN_H */