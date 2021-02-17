#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 * Description: reverses the string
 * Return: nothing
 **/


void rev_string(char *s)
{
  int i, j;
  char *begin, *end, c;

  j = *s;
  begin = s;
  end = s;
  
  for (i = 0; i < j -1; i++)
    
      end++;

 for (i = 0; i < j/2; i++)
{
  c = *end;
  *end = *begin;
  *begin = c;

  begin++;
  end--;
}

}
