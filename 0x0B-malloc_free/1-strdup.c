#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: pointer to the input string
 * Return: return status
 */

char *_strdup(char *str)
{
	int a, i = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	s = malloc((sizeof(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
	{
		s[a] = str[a];
	}

	s[a] = '\0';
	return (s);
}
