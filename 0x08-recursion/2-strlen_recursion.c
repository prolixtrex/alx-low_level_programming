#include "main.h"

/**
 * _strlen_recursion - print length of input string
 * @s: pointer to input string;
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
		return (len);
	++len;
	_strlen_recursion(s);

	return (len);
}
