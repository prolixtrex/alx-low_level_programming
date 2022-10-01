#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcpy - function to copy string from src to dest
 * @dest: destination file
 * @src: source file
 * Return: returns destination file
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
