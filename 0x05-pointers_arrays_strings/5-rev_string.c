#include "main.h"

/**
 * rev_string - function that reverses string
 * @s: pointer to input string
 * Return: nothing
 */

void rev_string(char *s)
{
	char x;

	int n = strlen(s);

	for (int i = 0; i < n / 2; i++)
	{
		x = s[i];
		s[i] = s[n - i - 1];
		s[n - i - 1] = x;
	}
}
