#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculates the largest prime factor of 612852475143
 *
 * Return: zero is success
 */

int main(void)
{
	long int i;

	for (i = 612852475143; i > 1; i--)
	{
		if (612852475143 % i == 0)
		{
			printf("%ld", i);
		}
	}
}
