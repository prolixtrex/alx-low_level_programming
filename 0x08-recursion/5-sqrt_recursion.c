#include "main.h"

/**
 * sqr - finds the square of a number
 * @n: natural number
 * @i: values of i
 * Return: returns square-root
 */

int sqr(int n, int i)
{
	if ((i * i) == n)
		return (i);
	else if ((i * i) < n)
	{
		return (sqr(n, i + 1));
	}
	else
		return (-1);
}

/**
 * _sqrt_recursion - recursively call for sqaureroot
 * @n: input value
 * Return: value of sqaureroot
 */

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}
