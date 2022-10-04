#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: input
 * Return: returns status
 */

char *create_array(unsigned int size, char c)
{
	int i;
	char *s;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
