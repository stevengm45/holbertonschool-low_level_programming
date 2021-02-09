#include "holberton.h"
/**
 * print_alphabet - Prints the alphabet in lowercase x10.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
  int i = 0;
  while(i < 10)
    {
      int j = 97;
      while(j < 122)
	{
	  _putchar(j);
	  j++;
	}
      i++;
      _putchar('\n');
    }
}
      
    
    
