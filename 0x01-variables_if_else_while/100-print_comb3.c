#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Imprimir los numeros del 00 a 99 sin repetirse
 * Return: 0 for success
 */
int main(void)
{
int i, a, b, c;

for (i = 1; i < 100; i++)
{
b = i % 10;
a = i / 10;
c = (b * 10) + n;
if (i < c)
{
putchar((i / 10) + '0');
putchar((i % 10) + '0');
if (i != 89)
{
putchar(44);
putchar(32);
}
}
}
putchar('\n');
return (0);
}
