#include "main.h"

/**
 * _memset - fills the first n  memory spaces  pointed by s by the byte b. 
 * @s: is memrory area pointer (an array)
 * @b: is the byte to be filled
 * @n: is the number of first n elements to be filled by b.
 * Return: pointer to s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
