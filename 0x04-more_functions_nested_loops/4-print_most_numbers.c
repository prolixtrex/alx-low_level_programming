#include "main"

/**
 * print_most_numbers - prints numbers from 0 to 9
 * skipping 2 and 4
 */

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}

		_putchar((i % 10) + '0');
		i++;
	}

	_putchar('\n');
}
