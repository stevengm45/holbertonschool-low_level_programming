#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers using the
 * Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the index where value is located or -1 if array is NULL or no match
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, m = size - 1, p = 0;

	if (array)
	{
		while (l <= m)
		{
			p = (l + m) / 2;

			printf("Searching in array: ");
			for (i = l; i <= m; i++)
			{
				if (i != m)
					printf("%d, ", array[i]);
				else
					printf("%d", array[i]);
			}

			printf("\n");

			if (array[p] < value)
				l = p + 1;
			else if (array[p] > value)
				m = p - 1;
			else
				return (p);
		}
	}
	return (-1);
}
