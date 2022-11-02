#include "main.h"

/**
 * factorial - calculates the factorial of an integer
 * @n: is an integer
 * Return: the value of factorial if n > 0, and -1 if nis negative.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
