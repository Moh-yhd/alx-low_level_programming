#include "main.h"

/**
 * print_number - prints given integers using _putchar
 * @n: is an integer to be printed
 * Return: returns void
 */

void print_number(int n)
{
	unsigned int m = 0;
	char last;
	unsigned int reverse = 0;

	if (n < 0) 
	{
		_putchar('-');
		last = '0' - n % 10;
		m = n / -10;
	}
	else
	{
		last = n % 10 + '0';
		m = n / 10;
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
	_putchar(last);
}
