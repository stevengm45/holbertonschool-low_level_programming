#include "holberton.h"
/**
 * print_alphabet_x10 - This function print alphabet x10
 *
 * Return: 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i == 9)
{
int j = 97;
while (j < 122)
{
_putchar(j);
j++;
}
i++;
}
_putchar('\n');
}
