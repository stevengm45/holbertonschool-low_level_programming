#include "holberton.h"
/**
 * print_triangle - function that prints a square, followed by a new line
 * @size: size of triangle
 * Return: nothing.
 */
void print_triangle(int size)
{
int i, j, n;

if (size > 0)
{
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
n = (size - i) - 1;
if (j < n)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}
