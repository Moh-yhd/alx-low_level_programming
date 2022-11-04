#include "main.h"

/**
 * *_strcpy - copies a string to another string and returns its pointer
 * @dest: is a string
 * @src: is a string
 * Return: pointer to the copied array '*dest'
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0, j, k;
	char *p;

	while (src[i] != '\0')
	{
		i++;
	}
	k = i;
	i = 0;
	for (j = 0; j < k; j++)
	{
		dest[j] = src[i];
		i++;
	}
	dest[j] = '\0';
	p = dest;

	return (p);
}


