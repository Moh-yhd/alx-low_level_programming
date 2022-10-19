#include <stdio.h>

/**
 * fibunacci - this function prints the sum of even fibunacci numbers less than 4,000,000
 *
 * Return: returns zero if success
 */

int fibunacci(void)
{
	int i = 1;
	long int a = 0;
	long int b = 1;
	long int fib;
	long int fibSum = 0;

	while (i)
	{
		fib = a + b;
		a = b;
		b = fib;
		if (fib / 2 == 0)
		{
			fibSum = fibSum + fib;
		}
		if (fib > 4000000)
			break;
		i++;
	}
	printf("%ld\n", fibSum);
	return (0);
}
