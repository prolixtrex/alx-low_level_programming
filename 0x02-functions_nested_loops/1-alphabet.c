#include "main.h"

/**
 * main - program that prints alphabet in lower case
 *
 * Return: 0
 */

int main(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}

	_putchar('\n');
	return (0);
}
