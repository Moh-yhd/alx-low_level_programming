#include "main.h"

/**
 * *_strcat - concatenates strings
 * @src: is a string to be added on dest
 * @dest: is a string to accept string src
 * Return: string dest after concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, l = 0, k;
	char *p;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	/*dest[i + 1] = ' ';*/
	for (k = i + 2; k <= i + j; k++)
	{
		dest[k] = src[l];
		l++;
	}
	dest[k] = '\0';
	p = dest;
	return (p);
}

