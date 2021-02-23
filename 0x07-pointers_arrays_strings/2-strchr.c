#include "holberton.h"
/**
 * _strchr - locates char in a string
 *@s: string
 *@c: character
 * Return: char or null
 */

char *_strchr(char *s, char c)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
for (j = 0; j <= i; j++)
{
if (s[j] == c)
return (s + j);
}
return ('\0');
}
