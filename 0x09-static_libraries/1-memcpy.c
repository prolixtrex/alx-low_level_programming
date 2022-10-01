#include <string.h>
#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: n bytes to copy
 * Return: returns the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
