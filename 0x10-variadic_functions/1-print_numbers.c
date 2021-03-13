#include "variadic_functions.h"
/**
 *print_numbers - print given numbers followed by new line
 *@separator: string to be printed between numbers
 *@n: number of arguments
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{

va_list print;
unsigned int i = 0;

va_start(print, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(print, int));
if (separator != NULL && i < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(print);
}
