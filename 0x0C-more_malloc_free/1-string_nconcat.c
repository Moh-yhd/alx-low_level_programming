#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates string one with
 * n bytes of string two
 * @s1: is a string to be concatenated
 * @s2: is a string to be concatenated
 * @n: is number of bites
 *
 * Return: pointer to a string if success
 * NULL if fails allocating required memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int len1 = 0, len2 = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	p = malloc((len1 + len2  + 1) * sizeof(char));
	if (p == NULL)
	{
		return (NULL);
		free(p);
	}
	for (i = 0; i < len1; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; i < (len1 + n) && s2[j] != '\0'; j++, i++)
		p[i] = s2[j];
	p[i] = '\0';

	return(p);
}
