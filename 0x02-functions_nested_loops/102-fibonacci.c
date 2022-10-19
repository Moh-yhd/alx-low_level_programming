#include <stdio.h>

/**
 * main - this function prints the first 50 fibonacci numbers
 *
 * Return: returns zero if success
 */

int main(void)
{
	int i = 1;
	long int a = 0;
	long int b = 1;
	long int fib;
	while (i <= 50)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%ld", fib);
		if (i < 50)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}
