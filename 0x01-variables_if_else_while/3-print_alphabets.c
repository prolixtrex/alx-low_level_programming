#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: 0 succesful
 */

int main(void)
{
	int x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar(x);
	}

	putchar('\n');
	return (0);
}
