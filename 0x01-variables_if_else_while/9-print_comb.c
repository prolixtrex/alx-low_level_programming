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

	for (x = 0; x <= 9; x++)
	{
		putchar(x % 10 + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
