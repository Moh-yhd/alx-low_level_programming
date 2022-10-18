#include "main.h"

/**
 * jack_bauer - prints every minute of jack bauer's 24
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i = 0;
	int j;
	int k;
	int l;

	while (i <= 2)
	{
		j = 0;
		while (j <= 9)
		{
			if (i * 10 + j <= 23)
			k = 0;
			while (k <= 5)
			{
				l = 0;
				while (l <= 9)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar(' ');
					_putchar('\n');
					l = l + 1;
				}
				k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
}
