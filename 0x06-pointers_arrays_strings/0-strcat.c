#include "main.h"

/**
 * *_strcat - concatenates strings
 * @src: is a string to be added on dest
 * @dest: is a string to accept string src
 * Return: string dest after concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
		i++;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

