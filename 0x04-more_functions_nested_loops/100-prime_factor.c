#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the largest prime factor of 612852475143
 *
 * Return: zero is success
 */

int main(void)
{
	unsigned long int i;
	unsigned long int j;
	unsigned long int x = 612852475143;

	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			x = x / i;
		}
	}
	printf("%lu", i);
	printf("\n");

	return (0);
}
