#include "holberton.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
int i = 0;
int j;
while (i < n)
{
j = a[n - 1];
a[n - 1] = a[i];
a[i] = j;
n--;
i++;
}
}
