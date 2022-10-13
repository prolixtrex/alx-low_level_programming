#include "funtion_pointers.h"

/**
 * array_iteratior - function that executes a function 
 * given as a parameter on each element of an array.
 * @array: pointer to array of funtions
 * @size: size of the array
 * @action: pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size --> 0)
		{
			action(*array);
			array++;
		}
	}
}