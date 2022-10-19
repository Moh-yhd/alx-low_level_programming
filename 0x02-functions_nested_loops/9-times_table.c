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
			if (m <= 9)
			{
				_putchar(m + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
