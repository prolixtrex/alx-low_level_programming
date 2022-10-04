#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer to a 2 dimensional
 * array of integers
 * @width: width of array
 * @height: height of array
 * Return: return status
 */

int **alloc_grid(int width, int height)
{
	int **arr, i, j;

	arr = malloc(sizeof(*arr) * height);

	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			arr[i] = malloc(sizeof(**arr) * width);
			if (arr[i] == 0)
			{
				/*Free everything if malloc fails*/
				while (i--)
				free(arr[i]);
				free(arr);
				return (NULL);
			}

			for (j = 0; j < width; j++)
			arr[i][j] = 0;
		}
	}

	return (arr);
}
