#include "main.h"

/**
 * print_binary - prints the binary represntation of a unsigned int
 * @n: is an unsigned int
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int b;

	for (i = 63; i >= 0; i--)
	{
		b = n >> i;

		if ((b & 1) == 1)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}
	if (flag == 0)
		_putchar('0');
}
