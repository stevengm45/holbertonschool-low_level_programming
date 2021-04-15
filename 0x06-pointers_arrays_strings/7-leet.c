#include "holberton.h"
/**
 *leet - function to replaced
 *@s: save the value array
 *Return: s
 */


char *leet(char *s)
{
	int i, j;
	char *r;

	r = "aAeEoOtTlL4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == r[j])
			s[i] = r[j + 10];
		}
	}
	return (s);
}
