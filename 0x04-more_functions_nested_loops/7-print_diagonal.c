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

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
}
