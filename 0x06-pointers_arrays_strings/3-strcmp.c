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
	int comp = strcmp(s2, s1);

	if (comp > 0)
	{
		ret = 15;
	}
	else if (comp < 0)
	{
		ret = -15;
	}
	else
	{
		ret = 0;
	}

	return (ret);
}
