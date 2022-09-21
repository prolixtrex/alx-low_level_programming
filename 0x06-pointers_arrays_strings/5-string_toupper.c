#include <ctype.h>
#include "main.h"

/**
 * string_toupper - function that converts lower case to upper case
 * @str: pointer to the input string
 * Return: returns the converted string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		i++;
	}

	return (str);
}
