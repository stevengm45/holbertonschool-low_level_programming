#include "holberton.h"
/**
 *puts2 - Funtion print strings
 *@str: parameter whit value
 *Return: void
 **/

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
