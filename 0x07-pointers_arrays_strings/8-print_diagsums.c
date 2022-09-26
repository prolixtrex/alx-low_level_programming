#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Print sum of diagonals of square array
 * @a: pointer to input array
 * @size: size of square array
 */

void print_diagsums(int *a, int size)
{
	int sum_1 = 0;
	int sum_2 = 0;
	int i, ele;

	for (i = 0; i < size; i++)
	{
		ele = (i * size) + i;
		sum_1 += a[ele];
	}

	for (i = 1; i <= size; i++)
	{
		ele = (i * size) - i;
		sum_2 += a[ele];
	}

	printf("%d, %d\n", sum_1, sum_2);
}
