#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: number separator
 * @n: input values
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(nums, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(nums);
	_putchar('\n');
}
