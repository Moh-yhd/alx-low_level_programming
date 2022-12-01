#include "main.h"

/**
 * get_bit - gets the bit at any given index
 * @n: is a long integer
 * @index: is where the bit value is required
 *
 * Return: index value (int)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;
	int b;

	for (i = 31; ; i--)
	{
		b = (n >> i) & 1;
		if (i == index)
			return (b);
	}
	return (-1);
}
