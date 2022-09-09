#include <stdio.h>

/**
 *  main - Entry point
 *
 *  Return: Always 0 (Success)
 */

int main(void)
{
	int c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		putchar(tolower(c));
	}
	return (0);
}

