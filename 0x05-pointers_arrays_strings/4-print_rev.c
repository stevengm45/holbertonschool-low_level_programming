#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/


void print_rev(char *s)
{
int i = 0;
int j;

while (s[i] != '\0')
{
i++;
}
for (j = i - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
