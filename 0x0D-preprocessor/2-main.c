#include <stdio.h>

/**
 * main - print name of file it was compiled from
 * Return: 0 for success
 */

int main(void)
{
	printf("%s/n", _FILE_);
	return (0);
}
