#include "main.h"

/**
 * print_number - prints given integers using _putchar
 * @n: is an integer to be printed
 * Return: rerurs void
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		_putchar('-');
		m  = n * -1;
	}
	else
	{
		m = n;
	}
	if (m > 999)
	{
		_putchar((m / 1000) + 48);
		_putchar((m % 1000) / 100 + 48);
		_putchar(((m % 1000) % 100) / 10 + 48);
		_putchar(((m % 1000) % 100) % 10 + 48);
	}
	else if (m > 99)
	{
		_putchar((m / 100) + 48);
		_putchar((m % 100) / 10 + 48);
		_putchar((m % 100) % 10 + 48);
	}
	else if (m > 9)
	{
		_putchar((m / 10) + 48);
		_putchar((m % 10) + 48);
	}
	else
	{
		_putchar(n + 48);
	}
}
