#include "holberton.h"
/**
 * print_square - print a square of input size
 * @size: demensions of square
 * Return: nothing
 **/
void print_square(int size)
{
int i, j;

for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
_putchar(35);
_putchar('\n');
}
if (size < 1)
{
_putchar('\n');
}
}
