#include "main.h"

/**
 * _isdigit - checks for digits betwent 0 and 9
 * @c: input value
 * Return: 1 if input value is digit, otherwise 0
 */

int _isdigit(int c)
{
	int res;

	if (isdigit(c) != 0)
	{
		res = 1;
	}
	else
	{
		res = 0;
	}

	return (res);
}
