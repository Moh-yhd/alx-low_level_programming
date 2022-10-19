#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers up to 98 
 *
 * Retrun: void
 */

void print_to_98(int n)
{
	int i;
	if (n < 98)
	{
		i = n;
		while (i <= 98)
		{
			if (i / 10 == 0)
			{
				putchar(i + '0');
			}
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			if (i != 98)
			{
				putchar(',');
				putchar(' ');
			}
				i++;
		}
	}
	if (n > 98)
	{
		i = n;
		while (i >= 98)
		{
			if (i / 10 == 0)
			{
				putchar(i + '0');
			}
			else
			{
				putchar(i / 10 + '0');
				putchar(i % 10 + '0');
			}
			i--;
		}
	}
	putchar('\n');
}
