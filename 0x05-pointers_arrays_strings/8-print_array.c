#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements of array of integers
 * @a: array of integers
 * @n: number of elements in the array
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
}
