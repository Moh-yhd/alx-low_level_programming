#include "main.h"

/**
 * is_prime_number - checks if an integer is prime or not.
 * @n: is an integer
 * @m: is an integer
 * Return: 1 if number is prime and -1 if it is not.
 */

int _prime(int n, int m);

int is_prime_number(int n)
{
	return (_prime(n, 2));
}

/**
 * _prime - checks if a number is prime or not
 * @n: is an integer to be checked
 * @m: is an integer, possible factor
 * Return: 1 or zero
 */

int _prime(int n, int  m)
{
	if (n == 1 || n == -1)
	{
		return (0);
	}
	else if (m == n / 2)
	{
		return (1);
	}
	else if (n % m == 0)
	{
		return (0);
	}
	else
	{
		return (_prime(n, m + 1));
	}
}
