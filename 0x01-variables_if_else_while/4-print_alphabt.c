#include <stdio.h>
#include <ctype.h>

/**
 * main - program entry point
 *
 * Return: 0 for success
 */

int main(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'e' || x == 'q')
		{
			x += 1;
			putchar(x);
		}
	}

	putchar('\n');
	return (0);
}
