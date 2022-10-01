#include <string.h>
#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to string one
 * @s2: pointer to string two
 * Return: returns
 */

int _strcmp(char *s1, char *s2)
{
	int ret;
	int i = 0;

	while (*(s1 + i) == *(s2 + i) && *(s1 + i))
	i++;

	if (*(s2 + i))
		ret = (*(s1 + i) - *(s2 + i));
	else
		ret = 0;
	return (ret);
}
