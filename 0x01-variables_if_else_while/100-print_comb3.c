#include <stdio.h>




int main(void)
{
  int i, j;

  for ( i = 0; i <= 9; i++)
    {
      for (j = (i + 1); j <= 9; j++)
      {
      putchar(i);
      putchar(j);
      if(i != 8 || i != 9)
	{
	  putchar(44);
	  putchar(32);
      }
      //j += 1;
    }
      //i += 1;
    }
  putchar('\n');
  return(0);
  
}