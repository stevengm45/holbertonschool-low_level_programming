#include "holberton.h"

/**
 * print_diagsums - prints diagonal sums
 * @a: the matrix
 * @size: column size
 */


void print_diagsums(int *a, int size)
{
	int i = 0, num1 = 0, num2 = 0;

	while (i < size)
		{
			num1 = num1 + a[i + (i * size)];
			num2 = num2 + a[(size * (i + 1)) - (i + 1)];
			i++;
		}
	printf("%d, %d\n", num1, num2);
}
