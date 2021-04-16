#include "holberton.h"
/**
 * _memset - fills memory with byte
 *@s: pointer to n
 *@b: constan byte
 *@n : n bytes to print
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
