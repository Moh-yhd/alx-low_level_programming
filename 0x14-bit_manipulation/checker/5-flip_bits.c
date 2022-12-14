#include "main.h"

/**
 * flip_bits - gets the number of bits needed to be flip a number
 * @n: is a long int
 * @m: is a long int
 *
 * Return: the number of bits (unsigned int)
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, count = 0;
	unsigned long int a, b;

	for (i = 0; i < 63; i++)
	{
		a = (n >> i) & 1;
		b = (m >> i) & 1;

		if (a != b)
			count++;
	}

	return (count);
}
