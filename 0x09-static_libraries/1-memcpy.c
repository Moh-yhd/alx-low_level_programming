#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest.
 * @src: contains bytes to be copied to dest
 * @dest: receives n bytes from src.
 * @n: is the number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
