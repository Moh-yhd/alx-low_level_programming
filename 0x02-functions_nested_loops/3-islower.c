#include "main.h"

/**
 * _islower - checks if a letter is a lowercase or not"
 *
 * Return: returns 0 or 1
 */
int _islower(int c)
{
	int result;

	if (c >= 'a' && c <= 'z')
	{
		result = 0;
	}
	else
		result = 1;
	
	return (result);
}
