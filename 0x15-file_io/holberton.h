#ifndef _holberton_h_
#define _holberton_h_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


int _putchar(char);
ssize_t read_textfile(const char *filename, size_t letters);

#endif