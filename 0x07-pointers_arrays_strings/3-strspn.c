#include "holberton.h"
/**
 * _strspn - prints buffer in hexa
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: s.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
int j = 0;
int n = 0;

for (i = 0; s[i] != '\0'; i++)
{
while (accept[j] != '\0')
if (accept[j] == s[i])
{
n = 1;
}
if (n == 0)
{
return (i);
}
j++;
}
return (i);

}
