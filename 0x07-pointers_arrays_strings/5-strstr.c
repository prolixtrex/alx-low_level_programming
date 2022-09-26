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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
