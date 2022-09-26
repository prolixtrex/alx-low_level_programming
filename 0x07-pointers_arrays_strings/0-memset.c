#include <string.h>
#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to input
 * @b: constant byte to fill s
 * @n: first number of bytes
 * Return: returns a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
