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
	int i = 0, j = 0;

	for (i = 0; i < n && src[j] != '\0'; i++)
	{
		dest[i] = src[j];
		j++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
