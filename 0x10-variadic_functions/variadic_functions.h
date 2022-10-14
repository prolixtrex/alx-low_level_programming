#ifndef _HEADER_
#define _HEADER_
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
int _putchar(char c);

/**
 *
 */

typedef struct format_types
{
	char *identifier;
	void (*f)(char *separator, va_list args);
} f_dt;

#endif
