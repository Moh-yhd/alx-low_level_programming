#include "main.h"

/**
 * _isupper - checks whether a charachter is upper case or not
 * @c: is a charachrer
 * Return: retuns 1 if upper case and 0 if else
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
