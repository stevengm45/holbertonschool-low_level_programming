#include "holberton.h"
/**
 * times_table - It is a table multiplication
 *
 * Return: no return
 */
void times_table(void)
{
int i, j, n;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
n = i * j;
if (j == 0)
{
_putchar(n + 48);
}
else if (n < 10)
{
_putchar(32);
_putchar(n + 48);
}
else
{
_putchar((n / 10) + 48);
_putchar((n % 10) + 48);
}
if (j != 9)
{
_putchar(44);
_putchar(32);
}
}
_putchar('\n');
}
}
