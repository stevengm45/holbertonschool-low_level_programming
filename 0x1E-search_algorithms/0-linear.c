#include "search_algos.h"

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
			if(tmp == value)
				return (i);
		}
	}
	return (-1);
}
