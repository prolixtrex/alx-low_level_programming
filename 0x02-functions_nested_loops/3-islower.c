#include "main.h"

/**
 * _islower - checks for lower case characters
 * @c: the character to check if it is lower
 * Return: 1 if int c is lower otherwise 0
 */

int _islower(int c)
{
	int ret;

	if (islower(int c) == 1)
	{
		ret = 1;
	} else
	{
		ret = 0;
	}

	return (ret);
}
