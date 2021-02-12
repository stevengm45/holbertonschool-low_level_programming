#include "holberton.h"
/**
 *print_line - print the value of n
 *@n: entry point
 *
 */
void print_line(int n)
{

int m = 0;
if (n > 0)
{
while (m < n)
{
_putchar(95);
m++;
}
_putchar('\n');
}
else
{
_putchar('\n');
}
}
