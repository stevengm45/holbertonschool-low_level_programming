#include "variadic_functions.h"
/**
 * print_numbers - print numbers with a separator
 * @separator: <=
 * @n: numbers
 *
 * Return: none
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;

va_list print;
va_start(print, n);
for (i = 0; (i < n); i++)
{
if (separator != NULL)
{
printf("%d%s", va_arg(print, int), separator);
}
}
va_end(print);
printf("\n");
}
