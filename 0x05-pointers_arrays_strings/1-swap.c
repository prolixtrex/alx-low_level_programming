#include "main.h"

/**
 * swap_int - a function that swapt the value of two numbers
 * @a: pointer to a
 * @b: pointer to b
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
