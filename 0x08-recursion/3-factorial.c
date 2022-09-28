#include "main.h"

/**
 * factorial - returns the factirial of n
 * @n: value of the factorial
 * Return: result of the factorial
 */

int factorial(int n)
{
	if (n < 0) 
		return (-1);
	else
	{
		if (n = 0)
			return (0);
		return (n * factorial(n - 1));
}
