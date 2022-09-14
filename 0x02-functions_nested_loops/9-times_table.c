#include "main.h"
/**
 * times_table - prints times table up to 9
 * return: nothing
 */

void times_table(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}

			_putchar((i * j) / 10 + '0');
			_putchar((i * j) % 10 + '0');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
