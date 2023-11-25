#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void show_start_icon(void);
void print_mess(const char *message);
void take_command(char *command, size_t size);
void run_command(const char *command);

#endif
