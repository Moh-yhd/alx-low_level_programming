#include "main.h"

/**
 * _strchr - returns the address for the first occurence of char c
 * @s: is a string where c is located
 * @c: is a character to be found
 * Return: the address of char c if c exists or NULL if it doesn't
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			break;
	}
	if (s[i] != c)
		return (NULL);
	p = s + i;
	return (p);
}
