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
	int i;
	int flag;

	for (i = 0; (s1[i] == s2[i]) && (s1[i] != '\0' || s2[i] != '\0');)
	{
		i++;
	}
	flag = s1[i] - s2[i];
	return (flag);
}
