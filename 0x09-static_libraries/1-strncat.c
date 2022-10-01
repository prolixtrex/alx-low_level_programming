#include "main.h"
#include <string.h>

/**
 * _strncat - joins two strings together using n bytes from the source string
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: number of bytes to be joined from the source string
 * Return: returns the joined string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
