#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies a string to anouther one
 * @src: is a string to be coppied to dest
 * @dest: is a string to accept string src
 * @n: is the the number of bites. if len os src is less than,
 *null is uplied till n
 * Return: string dest after copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, k;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	printf("i = %d, j = %d,  n = %d", i, j, n);
	return (dest);
}

