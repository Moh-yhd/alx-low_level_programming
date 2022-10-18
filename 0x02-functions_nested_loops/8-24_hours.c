#include "main.h"

/**
 * jack_bower - prints every minute of jack bauer's 24
 * 
 * Return: void
 */
void jack_bauer(void)
{
	int i = 48;
	int j;
	int k;
	int l;

	while (i <= 50)
	{
		j = 48;
		while (j <= 51)
		{
			k = 48;
			while (k <= 53)
			{
				l = 48;
				while (l <= 57)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
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
