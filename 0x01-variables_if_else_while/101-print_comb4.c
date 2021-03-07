#include <stdio.h>
/**
 * main - program that prints all possible different combinations of
 * three digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 012, 120, 102, 021, 201, 210 are considered the same combination
 * Return: 0
 */

int main(void)
{
int i, j, n;
for (i = 48; i <= 57; )
{
j = i + 1;
for (; j <= 57; )
{
n = j + 1;
while (n <= 57)
{
putchar(i);
putchar(j);
putchar(n);
if (i != 55 || j != 56 || n != 57)
{
putchar(44);
putchar(32);
}
n += 1;
}
j += 1;
}
i += 1;
}
putchar('\n');
return (0);
}
