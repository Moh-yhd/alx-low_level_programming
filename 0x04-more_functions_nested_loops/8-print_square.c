#include "main.h"

/**
 * print_square - prints a square of user specified size
 * @size: determines the size of the square
 * Return: returns void
 */

void print_square(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (i <= 0)
	{
		_putchar('\n');
	}
}
