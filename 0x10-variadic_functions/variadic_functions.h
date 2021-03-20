#ifndef VARIADIC_H
#define VARIADIC_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct fun
{
  char *str;
  void (*f)(va_list arg);
} funct;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);



#endif




