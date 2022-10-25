#include "main.h"

/**
 * print_array - prints the first n elements of an array
 * @a: is an array
 * Return: nothing
 */

void print_number(int n);
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		print_number(a[i]);
		if (i < (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

void print_number(int n)
{
	unsigned int m;
	unsigned int reverse = 0;

	if (n < 0)
	{
		_putchar('-');
		m = n * -1;
	}
	else if (n > 0)
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
	if (n == 0)
	{
		_putchar('0');
	}
}
