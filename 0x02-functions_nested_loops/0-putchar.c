#include "main.h"

/**
 * main - A program the prints _putchar
 *
 * Return:Always 0 Success
 */

int main(void)
{
	int i = 0;
	char word[8] = "_putchar";

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}

	_putchar('\n');
	return (0);
}
