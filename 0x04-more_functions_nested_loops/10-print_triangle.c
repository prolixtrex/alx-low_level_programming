#include "main.h"

/**
 * print_triangle - prints in triangular pattern
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		i = 1;
		while (i <= size)
		{
			j = size;
			while (j >= 1)
			{
				if (i < j)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
				i++;
			}
		}
	}
}
