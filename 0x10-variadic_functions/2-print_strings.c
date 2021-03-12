#include "variadic_functions.h"
/**
 *print_strings - prints a given string followed by a new line
 *@separator: string to be printed between strings
 *@n: number of strings passed to the function
 *Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list vastring;
unsigned int i;
char *str;

va_start(vastring, n);

for (i = 0; i < n; i++)
{
str = va_arg(vastring, char*);
if (str == NULL)
printf("%s nil", str);

if (separator != NULL && i < n - 1)
{
printf("%s%s", str, separator);
}
else
printf("%s", str);
}
printf("\n");
va_end(vastring);
}
