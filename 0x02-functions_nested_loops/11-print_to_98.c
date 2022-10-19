#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints natural numbers up to 98" 
 * @n: n is any integer
 * Retrun: void
 */
void print_to_98(int n)
{
	int i = n;

	if (n < 98)
	{
		while (i <= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
			i++;
		}
	}
	else if (n == 98)
	{
		printf("%d", i);
	}
	else
	{
		i = n;
		while (i >= 98)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(",");
				printf(" ");
			}
			i--;
		}
	}
	printf("\n");
}

