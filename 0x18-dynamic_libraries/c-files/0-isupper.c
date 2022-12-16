#include <ctype.h>
#include "main.h"

/**
 * _isupper - Checks if a character is upper case
 * @c: input parameter
 * Return: 1 if upper, otherwise 0
 */

int _isupper(int c)
{
	int res;

	if (isupper(c) != 0)
	{
		res = 1;
	} else
	{
		res = 0;
	}

	return (res);
}
