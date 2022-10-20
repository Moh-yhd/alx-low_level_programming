#include "main.h"

/**
 * print_diagonal - prints a digonal line
 * @n: n is the numbe4 of timea '/' is going to be printed
 * Return: returns void
 */

void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
	_putchar('\n');
	}
}
