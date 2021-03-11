#include "variadic_functions.h"
/**
 * sum_them_all - return the sum of all the elements
 * @n: element
 *
 * Return: 0 if n == 0, otherwise sum result
 */

int sum_them_all(const unsigned int n, ...)
{
int suma = 0;
unsigned int i;

va_list listsum;
va_start(listsum, n);

for (i = 0; i < n; i++)
{
suma += va_arg(listsum, int);
}
va_end(listsum);
return (suma);

if (n == 0)
return (0);
}
