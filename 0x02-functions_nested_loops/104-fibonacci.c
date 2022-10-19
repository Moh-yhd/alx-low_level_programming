#include "stdio.h"

/**
 * main - this function prints the first 98 fibunacci numbers
 *
 * Return: returns zero if success
 */

int main(void)
{
	int i = 1;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int fib;

	while (i <= 90)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%lu", fib);
		printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
