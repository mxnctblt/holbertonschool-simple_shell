#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

extern char **environ;

int main(int ac, char **av, char **env);

int _putchar(char c);

void prompt(void);

void _EOF(char *line);

void exitshell(char **command);

void _fork(char **command, char *name, char **env, int i);

void execute(char **command, char *name, char **env, int i);

void print_env(char **command);

char **_getpath(char **env);

void msgerror(char *name, int i, char **command);

char **tokenize(char *line, const char *s);

void free_cm(char **command);
void free_exit(char **command);

int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);

#endif
