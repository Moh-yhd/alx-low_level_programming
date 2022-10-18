#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @n: n is a number
 * Return: returns the absolute value
 */
int _abs(int n)
{
	int m; 

	if (n < 0)
	{
		m = n * (-1);
	}
	else
	{
		m = n;
	}
	return (m);
}
