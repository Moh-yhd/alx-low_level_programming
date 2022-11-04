#include "main.h"

/**
 * _islower - checks if a letter is a lowercase or not
 * @c: c is an alphabet
 * Return: returns 0 or 1
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 1;
	}
	else
		result = 0;
	return (result);
}
