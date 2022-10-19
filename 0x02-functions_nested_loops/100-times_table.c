#include "main.h"

/**
 * print_times_table - this function prints the multiplication table up to n
 * @n: n is the times the multiplication will be output
 * Retrun: void
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int m;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				m = i * j;
				if (j == 0)
				{
					_putchar('0');
				}
				else if (m <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				}
				else if (m > 9 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(m / 10 + '0');
					_putchar(m % 10 + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(m / 100 + '0');
					_putchar((m % 100) / 10 + '0');
					_putchar((m % 100) % 10 + '0');
				}
				j++;
			}
			_putchar('\n');
			i++;
		}
	}
}
