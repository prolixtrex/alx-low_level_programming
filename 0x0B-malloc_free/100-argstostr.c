#include "main.h"
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of the program
 * @ac: number of arguements
 * @av: input of all argurments
 * Return: return status
 */

char *argstostr(int ac, char **av)
{
	int i, j, k, length;
	char *str;

	length = 0;
	k = 0;
	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; length++, i++)
		for (j = 0; av[i][j]; length++, j++)
			;

	str = malloc((sizeof(char) + length));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; k++, i++)
	{
		for (j = 0; av[i][j]; j++, k++)
			str[k] = av[i][j];
		str[k] = '\n';
	}
	str[k] = '\0';
	return (str);
}
