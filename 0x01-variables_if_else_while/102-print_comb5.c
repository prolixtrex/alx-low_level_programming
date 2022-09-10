#include <stdio.h>
#include <ctype.h>

/**
 * main - program to print combinations of two 2-digit numbers
 * All codes must be inside the main function
 * Return: 0
 */

int main(void)
{
	int a, b, x, y;

	x = 44; /* comma separator */
	y = 32; /* space separato */

	for (a = 0; a <= 99; a++)
	{
		for (b = a + 1; b <= 99; b++)
		{
			putchar((a / 10) + '48');
			putchar((a % 10) + '48');
			putchar(y);
			putchar((b / 10) + '48');
			putchar((b % 10) + '48');

			if (a != 98 || b != 99)
			{
				putchar(x);
				putchar(y);
			}
		}
	}

	putchar('\n');
	return (0);
}
