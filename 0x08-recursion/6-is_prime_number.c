#include "main.h"

/**
 * prime - test for divisors
 * @n: input value
 * @i: divisor
 * Return: 1 for prime numbers, otherwise 0
 */

int prime(int n, int i)
{
	if (n == i || n == 1)
		return (0);
	else if (n % i == 0)
		return (1);
	else
		return (prime(n, i + 1));
}

/**
 * is_prime_number - check if number is a prime number
 * @n: input value
 * Return: 1 for prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n == 2 || n == 3)
		return (1);
	return (prime(n, 2));
}
