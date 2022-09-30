#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the product of two numbers
 * @argc: number of inputs
 * @argv: array of inputs
 * Return: success
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		return 1;
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));

	exit(EXIT_SUCCESS);
}
