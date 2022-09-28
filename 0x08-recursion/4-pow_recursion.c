#include "main.h"

/**
 * _pow_recursion - prints x to the power of y
 * @x: integer input
 * @y: power of the integer
 * Return: returns result
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return 1;
	x *= _pow_recursion(x, y - 1);
	return x;
}
