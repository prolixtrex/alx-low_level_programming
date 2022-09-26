#include "main.h"

/**
 * _strstr - function finds the first occurrence of the substring needle in the
 * string haystack. The terminating null bytes (\0) are not compared
 * @haystack: pointer to string segment to search
 * @needle: pointer to the search input
 * Return: returns pointer to the found search location
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}

		if (needle[j] == '\0')
		{
			return (heystack + i);
		}
	}
	return ('\0');
}
