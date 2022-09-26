#include "main.h"

/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: segment of string to be compared
 * @accept: string to search
 * Return: retirns the earsch result
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while (accept[j] != '\0' && s[i] != accept[j])
			j++;
		if (accept[j] == '\0')
			return (i);
	}

	return (i);
}
