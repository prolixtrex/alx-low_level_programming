#include "main.h"

/**
 * main - program that prints alphabet in lower case
 *
 * Return: 0
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
}
