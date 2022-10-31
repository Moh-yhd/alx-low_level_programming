#include "main.h"

/**
 * _strspn - returns the number of bytes in the innitial segement of s
 * that contains all bytes from accept.
 * @s: is a string consisting the initial segement.
 * @accept: is the string that contains the bytes to be checked
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				break;
		}
	}
	return (i + 1);
}
