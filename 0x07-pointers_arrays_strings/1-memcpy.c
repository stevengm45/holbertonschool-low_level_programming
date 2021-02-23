#include "holberton.h"
/**
 * _memcpy - copies memory data
 *@dest: destination
 *@src: source
 *@n: bytes
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
