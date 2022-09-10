#include <stdio.h>
#include <ctype.h>

/**
 * main - a program tha prints alphabets in reverse
 * All codes must be in main function
 * Return: 0
 */

int main(void)
{
	int x;

	for (x = 'z'; x >= 'a'; x--)
	{
		putchar(x);
	}

	putchar('\n');
	return (0);
}
