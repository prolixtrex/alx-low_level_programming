#include <stdio.h>
#include <ctype.h>

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
		c = tolower(c);
		putchar(c);
	}
	return (0);
}

