#include <stdio.h>
#include <ctyp.h>

/**
 * main - program that prints all single digits of number 10
 * All your codes must be in the main function
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}

	putchar('\n');
	return (0);
}
