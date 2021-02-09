#include "holberton.h"
/**
 * _abs - This is a absolute value
 *
 * @a: This is the entry
 *
 * Return: Always 0.
 */
int _abs(int i)
{
if (i > 0)
{
return (i);
}
else if (i < 0)
{
i = i * -1;
return (i);
}
else
{
return (i);
}
}
