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
for (i = 0; i < n; i++)
{
printf("%d", va_arg(print, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
printf("\n");
va_end(print);
}
