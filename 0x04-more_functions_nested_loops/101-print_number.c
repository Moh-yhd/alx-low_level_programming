#include "main.h"

/**
 * print_number - prints given integers using _putchar
 * @n: is an integer to be printed
 * Return: returns void
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
	}
	m = n;
	if ((m / 10) > 0)
	{
		print_number(m / 10);
	}
	_putchar(n % 10 + '0');
}
