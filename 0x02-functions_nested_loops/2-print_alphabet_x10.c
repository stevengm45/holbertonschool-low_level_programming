#include "holberton.h"
/**
 * print_alphabet_x10 - This function print alphabet x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
while (i < 10)
{
int j = 97;
while (j <= 122)
{
_putchar(j);
j++;
}
_putchar('\n'); 
i++;
}
}
