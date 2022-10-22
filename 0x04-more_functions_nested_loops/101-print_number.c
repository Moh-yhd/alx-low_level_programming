#include "main.h"

/**
 * print_number - prints given integers using _putchar
 * @n: is an integer to be printed
 * Return: returns void
 */

void print_number(int n)
{
	unsigned int m = 0;
	unsigned int reverse = 0;

	if (n < 0)
	{
		m = -n;
		_putchar('-');
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	else 
	{
		m = n;
	}
	while (m > 0)
	{
		reverse = reverse * 10 + m % 10;
		m = m / 10;
	}
	while (reverse > 0)
	{
		_putchar(reverse % 10 + '0');
		reverse = reverse / 10;
	}
}
