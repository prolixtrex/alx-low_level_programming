#include <string.h>
#include "main.h"

/**
 * _strcat - function that concatonates(joins) two strings
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * Return: returns the destination string plus the source string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
