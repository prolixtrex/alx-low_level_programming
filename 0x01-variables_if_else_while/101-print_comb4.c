#include <stdio.h>
#include <ctype.h>

/**
 * main - program that print combinations of 3 digits
 * all codes must be inside the main function
 * Return: 0
 */

int main(void)
{
	int x, y, z;

	for (x = 48; x <= 57; x++)
	{
		for (y = x + 1; y <= 57; y++)
		{
			for (z = y + 1; z <= 57; z++)
			{
				putchar(x);
				putchar(y);
				putchar(z);

				if (x != 55 || y != 56 || z != 57)
				{
					putchar(44); /* insert a comma */
					putchar(32); /* insert a space */
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
