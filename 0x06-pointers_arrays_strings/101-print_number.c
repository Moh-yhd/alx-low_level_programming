#include "main.h"

/**
 * print_number -  prints an integer using _putchar
 * @n: is an integer
 * Return: nothing
 */

void print_number(int n)
{
	unsigned int m;

	m = n;
	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	if (m == 0)
	{
		_putchar('0');
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	if (m != 0)
		_putchar(m % 10 + '0');
}
