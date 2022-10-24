#include "main.h"

/**
 * swap_int - swaps values of integers
 * @a: is an integer
 * @b: is an integer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a + *b;	
	*a = c - *a;
}
