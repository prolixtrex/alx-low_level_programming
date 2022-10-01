#include <string.h>
#include "main.h"

/**
 * _strncpy - copies n bytes of string two into one
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: n bytes of the source string
 * Return: returns the copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
