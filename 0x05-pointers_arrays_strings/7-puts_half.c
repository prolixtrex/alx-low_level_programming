#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - prints 2nd half of a character
 * @str: pointer to input string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i, n;
	int len = strlen(str);

	if  (len % 2 != 0)
	{
		n = (len - 1) / 2;
	} else
	{
		n = len / 2;
	}

	for (i = n - 1; i < len; i++)
	{
		putchar(str[i]);
	}

	putchar('\n');
}
