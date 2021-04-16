#include "holberton.h"
/**
 * *_strpbrk - main function.
 * @s: the address of memory to print
 * @accept: the size of the memory to print
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0' ; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
	{
		if (accept[j] == s[i])
		{
			return (&s[i]);
		}
	}

	}
	return (0);
}
