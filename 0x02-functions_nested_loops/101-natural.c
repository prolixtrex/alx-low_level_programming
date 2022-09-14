#include <stdio.h>

/**
 * main - program that computes and prints the sum of all
 * the multiples of 3 or 5 below 1024
 * Return: int.
 */

int main(void)
{
	int multiples = 0;
	int output = 0;

	while (multiples < 1024)
	{
		if (multiples % 3 == 0 || multiples % 5 == 0)
		{
			output += multiples;
		}
		multiples += 1;
	}
	printf("%d\n", output);
	return (0);
}
