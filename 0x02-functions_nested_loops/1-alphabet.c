#include "main.h"

/**
 * print_alphabet - program that prints the alphabets in lower case
 * using using the function _putchar
 * Return: void (nothing)
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
