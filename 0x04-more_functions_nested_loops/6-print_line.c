#include "main.h"

/**
 * print_line - prints line across  the terminal using _
 * @n: number of _ used to print the line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar('_');
			i++;
		}

		_putchar('\n');
	}
}
