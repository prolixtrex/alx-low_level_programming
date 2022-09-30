#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all the arguements supplied
 * @argc: arguement counter
 * @argv: array of arguements
 * Return: success
 */

int main (int argc, char **argv)
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}

	exit(EXIT_SUCCESS);
}
