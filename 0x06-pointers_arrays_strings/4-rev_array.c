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
	int i = 0;
	int j;

	while (i < n / 2)
	{
		j = a[i];
		a[i] = a[n - i 1];
		a[n - i - 1] = j;
		i++;
	}
}
