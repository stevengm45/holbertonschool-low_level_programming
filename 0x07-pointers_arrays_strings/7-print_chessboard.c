#include "holberton.h"
/**
 *print_chessboard - print the chestboard
 *@a: pointer to array of board with values
 *Return: nothing
 */


void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j <= 8; j++)
		{
			if (j == 8)
				_putchar('\n');
			else
				_putchar(a[i][j]);
		}
	}
}
