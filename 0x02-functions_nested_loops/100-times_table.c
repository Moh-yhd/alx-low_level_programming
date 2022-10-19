#include "main.h"

/**
 * times_table - this function prints the multiplication table
 *
 * Retrun: void
 */

void print_times_table(int n)
{
	int i = 0;
	int j;
	int m;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			m = i * j;
			if (m <= 9)
			{
				_putchar(m + '0');
			}
			else if (m > 9)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		i++;
	}
}
