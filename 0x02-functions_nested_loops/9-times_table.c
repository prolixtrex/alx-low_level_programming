#include "main.h"
/**
 * times_table - prints times table up to 9
 * return: nothing
 */

void times_table(void)
{
	int i, j;

	i = 1;
	while (i <= 9)
	{
		j = 1;

		while (j <= 9)
		{
			_putchar((i * j) / 10 + '0');
			_putchar(',');
			_putchar(' ');
			j++;
		}

		_putchar('\n');
		i++;
	}
}
