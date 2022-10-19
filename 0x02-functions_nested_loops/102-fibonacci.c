#include <stdio.h>

/**
 * main - this function prints the first 50 fibonacci numbers
 *
 * Return: returns zero if success
 */

int main(void)
{
	int i = 1;
	int a = 0;
	int b = 1;
	int fib;
	while (i <= 50)
	{
		fib = a + b;
		a = b;
		b = fib;
		printf("%d, ", fib);
		i++;
	}
	printf("\n");
	return (0);
}
