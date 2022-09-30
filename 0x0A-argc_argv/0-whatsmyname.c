#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: Arguement counter
 * @argv: Arrays of arguements
 * Return: success
 */

int main(int argc, char const **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);
	exit(EXIT_SUCCESS);
}
