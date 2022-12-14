#include "main.h"

/**
 * *_strncat - concatenates strings
 * @src: is a string to be added on dest
 * @dest: is a string to accept string src
 * @n: is number of bytes
 * Return: string dest after concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

