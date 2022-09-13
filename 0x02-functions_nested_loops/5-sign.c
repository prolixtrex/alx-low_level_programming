#include "main.h"

/**
 * print_sign - function that checks the sign of the input
 * @n: the input to check
 * Return: 1, 0 or -1
 */

int print_sign(int n)
{
	int ret;

	if (n > 1)
	{
		_putchar('+');
		ret = 1;
	} else if (n == 0)
	{
		_putchar('0');
		ret = 0;
	} else
	{
		_putchar('-');
		ret = -1;
	}

	return (ret);
}
