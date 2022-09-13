#include <ctype.h>
#include "main.h"

/**
 * _isalpha - a function that checks for alphabetic character
 * @c: character to check
 * Return: 1 if it is a letter otherwise 0
 */

int _isalpha(int c)
{
	int ret;

	if (isalpha(c) != 0)
	{
		ret = 1;
	} else
	{
		ret = 0;
	}

	return (ret);
}
