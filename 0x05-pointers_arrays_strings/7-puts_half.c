#include "holberton.h"
/**
 *puts_half - prints every other number
 *
 *@str: the string to print
 */

void puts_half(char *str)
{
int i, j;
for (i = 0; str[i] != '\0'; i++)
j = i / 2;
if ((i % 2) + 1 == 1)
j++;
for (; j < i; j++)
{
_putchar(str[j]);
}
_putchar('\n');
}
