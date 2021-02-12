#include "holberton.h"
/**
 * print_diagonal - prints diagonal line
 * @n: length of line
 * Return: nothing
 **/
void print_diagonal(int n)
{
int m, l;

for (m = 1; m <= n; m++)
{
for (l = 1; l < m; l++)
_putchar(32);
_putchar(92);
_putchar('\n');
}
if (n < 1)
{
_putchar('\n');
}
}
