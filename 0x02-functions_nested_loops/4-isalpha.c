#include "main.h"

/**
 * _isalpha - checks if a characther is an alphabet or not
 * @c: c is a charachter
 * Return: returns 0 if c is a letter
 */
int _isalpha(int c)
{
	int result;

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		result = 1;
	}
	else
		result = 0;
	return (result);
}
