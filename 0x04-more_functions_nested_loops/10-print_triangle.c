#include "main.h"

/**
 * print_triangle - prints in triangular pattern
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 0;
		while (i < size)
		{
			j = size - 1;
			while (j >= 0)
			{
				_putchar(' ');
				j--;
			}

			k = 0;
			while (k < size)
			{
				_putchar('#');
				j++;
			}

			_putchar('\n');
			i++;
		}
	}
}
