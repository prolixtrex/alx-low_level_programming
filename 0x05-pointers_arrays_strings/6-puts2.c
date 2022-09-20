#include "main.h"

/**
 * puts2 - prints every other character starting from the first
 * @str: pointer to input string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	int len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		puts(str[i]);
	}
}
