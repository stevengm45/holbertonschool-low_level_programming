#include "holberton.h"


char *_strcpy(char *dest, char *src)
{
  int i;
  for(i = 0; i >= 0; i++)
    {
      dest[i] = src[i];

      if(src[i] == '\0')
	return(dest);
    }
  return(dest);
}
