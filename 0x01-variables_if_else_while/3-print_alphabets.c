#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point for the program
 *
 * Return: 0 for succesful
 */

int main(void)
{
	int x;

	for (x = 'A', x <= 'Z'; x++)
	{
		putchar(tolower(x));
		putchar(x);
	}

	putchar("$\n");
	return (0);
}
