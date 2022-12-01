#include "main.h"

/**
 * clear_bit - sets the value of bit to 1
 * @n: is a pointer to a number whose bit value is to be zero
 * @index: is where the index value is to be changed
 *
 * Return: 1 if success and -1 if failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n = *n & (~(1 << index));
	return (1);
}
