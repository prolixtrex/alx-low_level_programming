#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - function that prints string in reverse direction
 * @s: pointer to the string
 * Return: nothing
 */

void print_rev(char *s)
{
	char temp;
	int i, j;

	i = 0;
	j = strlen(s) - 1;

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}
