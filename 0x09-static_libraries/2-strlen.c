#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: is a string
 * Return: the length of the string s
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
