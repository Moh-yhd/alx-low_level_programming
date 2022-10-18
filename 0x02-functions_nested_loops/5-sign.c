#include "main.h"

/**
 * _isalpha - checks if a number is negative, positive or zero
 * @n: n is a number
 * Return: returns 1 if n is positive, 0 if n is zero, and -1 if n is negative
 */
int print_sign(int n)
{
	int result;

	if (n < 0)
	{
		result = -1;
		_putchar('-');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('0');
	}
	else
	{
		result = 1;
		_putchar('+');
	}
	return (result);
}
