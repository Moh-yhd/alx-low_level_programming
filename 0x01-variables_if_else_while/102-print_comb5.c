#include <stdio.h>

/**
 * main - createa every possible comibations of two digit numbers"
 *
 * Return: returns zero if succcess
 */

int main(void)
{
	int i = 48;
	int j;
	int k;
	int l;

	while (i >= 48 && i <= 57)
	{
		j = 48;
		while (j >= 48 && j <= 57)
		{
			k = 48;
			while (k >= 48 && k >= 57)
			{
				l = 48;
					while (l >= 48 && j <= 57)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						putchar(l);
						l = l + 1;
					}
					k = k + 1;
			}
			j = j + 1;
		}
		i = i + 1;
	}
	return (0);
}
