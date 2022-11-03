#include "main.h"

/**
 * _sqrt_recursion - claculates the square root of an integer.
 * _sqrt - returns the square root of a number
 * @n: is an integer
 * Return: the square of n, if it exists, and -1 if it doesn't exist
 */
int _sqrt(int n, int m);

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - returns the square root of a function
 * @m: is an integer
 * Return: int
 * */

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
