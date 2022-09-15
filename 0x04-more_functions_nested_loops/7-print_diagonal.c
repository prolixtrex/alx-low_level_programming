#include "main.h"

/**
 * print_diagonal - prints diagonal line
 * @n: input value
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			if (i != 0)
			{
				j = 0;
				while (j < i)
				{
					_putchar(' ');
					j++;
				}
			}
			_putchar('\\');
			_putchar('\n');
			i++;
		}
	}
}
