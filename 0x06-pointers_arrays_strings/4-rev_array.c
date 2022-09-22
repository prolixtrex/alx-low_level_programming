#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array
 * @a: pointer to the input array
 * @n: number of elements in the array
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0, i--)
	{
		if (i != 0)
		{
			printf("%d, ", a[i]);
		} else
		{
			printf("%d", a[i]);
		}
	}
}
