#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguements passed to it
 * @argc: number of arguements
 * @argv: array of arguements
 * Return: success
 */

int main(int argc, char const **argv)
{
	(void) argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
