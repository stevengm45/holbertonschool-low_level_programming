#include "holberton.h"
/**
 *rot13 - encodes a string using rot13
 *@s: string
 *Return: s
 **/


char *rot13(char *s)
{
	int i, j;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 52; j++)
		{
			if (s[i] == alphabet[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		j = 0;
	}
	return (s);
}
