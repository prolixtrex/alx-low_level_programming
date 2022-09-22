#include "main.h"

/**
 * cap_string - capitalise each string
 * @str: pointer to input string
 * Return: return the capitalizeded word
 */

char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	i = 1;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= ('a' - 'A');
	}

	while (str[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (str[i - 1] == sep[j] && (str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] -= ('a' - 'A');
			}
		}

		i++;
	}

	return (str);
}
