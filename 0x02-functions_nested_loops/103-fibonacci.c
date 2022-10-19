#include <stdio.h>

/**
 * main - this function prints sum of even fibunacci numbers < 4,000,000
 *
 * Return: returns zero if success
 */

int main(void)
{
	int i = 1;
	long int a = 0;
	long int b = 1;
	long int fib;
	long int fibSum = 0;

	while (i)
	{
		fib = a + b;
		if (fib % 2 == 0)
		{
		fibSum = fibSum + fib;
		}
		a = b;
		b = fib;
		i++;
		if (fib > 4000000)
			break;

	}
	printf("%ld\n", fibSum);
	return (0);
}
