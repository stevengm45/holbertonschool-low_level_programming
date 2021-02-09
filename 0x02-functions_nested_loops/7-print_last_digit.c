#include "holberton.h"




int print_last_digit(int n)
{
n = n%10;
if (n < 0)

n = -n;
_putchar(n + 48);
return (n);

}
