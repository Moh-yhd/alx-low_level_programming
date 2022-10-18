#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @n: n is a number
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	_putchar(m);
	return (m);
}
