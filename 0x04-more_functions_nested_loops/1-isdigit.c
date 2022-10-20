#include "main.h"

/**
 * isdigit - checks if a char is a digit or not
 * @c: is a charachter
 * Return: returns 1 if c is a digit 0 if not
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
