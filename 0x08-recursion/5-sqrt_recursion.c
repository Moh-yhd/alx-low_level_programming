#include "main.h"

/**
 * _sqrt_recursion - claculates the square root of an integer.
 * @n: is an integer
 * Return: the square of n, if it exists, and -1 if it doesn't exist
 */
int _sqrt(int n, int m);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

int _sqrt(int n, int  m)
{
	if (m > n)
	{
		return (-1);
	}
	else if (n == m * m)
	{
		return (m);
	}
	else
	{
		return (_sqrt(n, m + 1));
	}
}
