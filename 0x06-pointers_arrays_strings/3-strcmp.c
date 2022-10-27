#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: is a string
 * @s2: is a string
 * Return: zero if s1 & s2 are equal, a negative number
 * is s1 is less than s2, a positive number is s1
 * greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0')
	i++;
	while (s2[j] != '\0')
	j++;
	if (i == j)
	return (0);
	else if (i < j)
	return (-15);
	else
	return (15);
}
