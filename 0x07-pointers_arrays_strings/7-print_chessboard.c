#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function to print chessboard
 * @a: n x m array
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < a[]; i++)
	{
		for (j = 0; j < 8; j++)
		{
			printf("%c", a[i][j]);
			printf("\n");
		}
	}
}
