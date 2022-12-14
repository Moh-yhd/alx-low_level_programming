#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: is a string
 * @s2: is a steing
 *
 * Return: pointer to a memory location
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	int len;
	char *ar;

	len = _len(s1) + _len(s2);
	ar = malloc(len * sizeof(char) + 1);
	if (ar == NULL)
	{
		return (NULL);
	}
	if (s1 == NULL && s2 == NULL)
	{
		ar[0] = '\0';
	}
	j = 0;
	if (s1 != NULL)
	{
	for (i = 0; s1[i] != '\0'; i++)
	{
		ar[j] = s1[i];
		j++;
	}
	}
	if (s2 != NULL)
	{
	for (i = 0; s2 != NULL && s2[i] !='\0'; i++)
	{
		ar[j] = s2[i];
		j++;
	}
	}
	ar[j] = '\0';
	return (ar);
}

/**
 * _len - calculates the length of a string
 * @s: is a string
 *
 * Return: length of a string
 */
int _len(char *s)
{
	if (s == NULL)
		return (0);
	else if (*s)
		return (1 + _len(s + 1));
	else
		return (0);
}
