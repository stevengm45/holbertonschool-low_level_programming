#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear algorithm.
 * @array: Array of nums to check where the value is.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: -1 if value doesn't exist in array, else, the index where value is.
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;
	int tmp;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			tmp = array[i];
			printf("Value checked array[%d] = [%d]\n", i, tmp);
			if (tmp == value)
				return (i);
		}
	}
	return (-1);
}
