#include "main.h"

/**
 * _pow_recursion - calcules the result of x the power of y
 * @x: is an integer
 * @y: is an integer
 * Return: an integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
