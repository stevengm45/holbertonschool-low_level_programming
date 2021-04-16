#include "holberton.h"
/**
 * *_strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: string or null
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	while (*haystack != '\0')
		{
	j = haystack;

	for (i = needle; *i == *haystack && *i != '\0' && *haystack != '\0'; i++)
	{
	haystack++;
	}
	if (*i == '\0')
	return (j);
	haystack = j + 1;
	}
	return (0);
}
