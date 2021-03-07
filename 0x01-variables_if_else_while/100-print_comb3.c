#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Numbers must be separated by ,followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Return: 0
 */

int main(void)
{
int i, j;
for (i = 48; i <= 57; )
{
j = i + 1;
while (j <= 57)
{
putchar(i);
putchar(j);
if (i != 56 || j != 57)
{
putchar(44);
putchar(32);
}
j += 1;
}
i += 1;
}
putchar('\n');
return (0);
}
