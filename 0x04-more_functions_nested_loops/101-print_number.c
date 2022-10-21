#include "main.h"

/**
 * print_number - prints given 4 digits integers using _putchar
 * @n: is an integer to be printed
 * Return: rerurs void
 */

void print_number(int n)
{
	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n > 999)
	{
		_putchar((n / 1000) + '0');
		_putchar((n % 1000) / 100 + '0');
		_putchar(((n % 1000) % 100) / 10 + '0');
		_putchar(((n % 1000) % 100) % 10 + '0');
	}
	else if (n > 99)
	{
		_putchar((n / 100) + '0');
		_putchar((n % 100) / 10 + '0');
		_putchar((n % 100) % 10 + '0');
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else if (n >= 0 && n <= 9)
	{
		_putchar(n + '0');
	}
}
