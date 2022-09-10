#include <stdio.h>
#include <ctype.h>

/**
 * main - Program that prints all possible combinations of 2 digits
 * All codes must be inside the main function
 * Return: 0
 */

int main(void)
{
	int x;
	int y;

	for (x = 48; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			putchar(x);
			putchar(y);
			if (x != 56 || y != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}

	putchar('\n');
	return (0);
}
