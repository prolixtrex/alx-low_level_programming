#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets in lower case 10 times
 * Return: void (nothing)
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j;

	while (i < 10)
	{
		j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}

		_putchar('\n');
		i++;
	}
}
