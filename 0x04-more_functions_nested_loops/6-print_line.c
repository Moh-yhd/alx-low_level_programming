#include "main.h"

/**
 * print_line - prints a line length specified
 * @n: n is the length of the line, counts no of _s
 * Return: returns void
 */

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
