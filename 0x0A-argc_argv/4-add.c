#include <stdio.h>
#include "stdlib.h"

/**
 * main - add numbers in the argv array
 * @argc: Number of arguements
 * @argv: inputs of arguement
 * Return: sum
 */

int main(int argc, char **argv)
{
	int i, sum = 0;

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] < '0' || *argv[i] > '9')
			{
				printf("Error\n");
				return (1);
			}
			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
