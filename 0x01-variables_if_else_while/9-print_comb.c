#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints numbers 0-9 separated by comma
 * All codes must be inside the main function
 * Return:0
 */

int main(void)
{
	int x;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);

		if (x != 57)
		{
			putchar(44); /* represents comma in ascii */
			putchar(32); /* represents space in ascii */
		}
	}

	putchar('\n');
	return (0);
}
