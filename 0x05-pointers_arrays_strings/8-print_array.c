#include "main.h"

/**
 * print_array - prints the first n elements of an array
 * Return: nothing
 * print_number -  prints an integer using _putchar
 * @m: is an integer
 */

void print_number(int m);
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

/**
 * print_number -  prints an integer using _putchar
 * @m: is an integer
 */

void print_number(int m)
{
	if (m < 0)
	{
		_putchar('-');
		m = m * -1;
	}
	if (m == 0)
	{
		_putchar('0');
	}
	if (m / 10)
	{
		print_number(m / 10);
	}
	_putchar(m % 10 + '0');
}
