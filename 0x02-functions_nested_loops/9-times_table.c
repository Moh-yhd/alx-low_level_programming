#include "main.h"

/**
 * times_table - this function prints the multiplication table
 *
 * Retrun: void
 */

void times_table(void)
{
	int i = 0;
	int j;
	int m;

	while (i <= 9)
	{
		j = 0;
		while (j <= 9)
		{
			m = i * j;
			if (j == '0')
			{
				_putchar('0');
			}
			else if (m <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(m + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
