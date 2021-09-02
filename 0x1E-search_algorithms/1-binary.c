#include "search_algos.h"



int binary_search(int *array, size_t size, int value)
{
	size_t i, l = 0, m = size - 1, p = 0;

	if (array)
	{
		while ( l <= m)
		{
			p = (l + m) / 2;
			printf("Seraching in array: ");
			for (i = l; i <= m; i++)
			{
				if(i != m)
				{
					printf("%d, ", array[i]);
				}
				else
				{
					printf("%d", array[i]);
				}
			}
			printf("\n");

			if (array[p] < value)
			{
				l = p + 1;
			}
			else if (array[p] > value)
			{
				m = p - 1;
			}
			else
			{
				return (p);
			}
		}
	}
	return (-1);
}
