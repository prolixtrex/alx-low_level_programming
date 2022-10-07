#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatonate two strings
 * @s1: pointer to the first input string
 * @s2: pointer to the second input string
 * @n: number of bytes of s2 to be concat
 * Return: NULL if memory allocation failed, otherwise point to the
 * memory of concat string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strNew;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	strNew = malloc(sizeof(char) * (len + 1));

	if (strNew == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		strNew[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		strNew[len++] = s2[i];

	strNew[len] = '\0';

	return (strNew);
}
