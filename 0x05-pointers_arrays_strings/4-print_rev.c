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
	int i, j, count;

	while (s[count] != '\0')
	{
		count++;
	}

	j = count - 1;
	for (i = 0; i < count; i++)
	{
		temp[i] =  s[j];
		j--;
	}

	puts(temp);
}
