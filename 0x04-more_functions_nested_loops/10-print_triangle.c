#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the trainagle
 * Return: returns void
 */

void print_triangle(int size)
{
	int i;
	int j;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j <= size - i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

