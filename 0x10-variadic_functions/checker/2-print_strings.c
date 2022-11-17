#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints strings passed to it
 * @separator: a pointer to a string that separates the
 * the strings to he printed
 * @n: is the number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
