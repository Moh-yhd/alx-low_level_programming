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
	int count1 = 0, count2 = 0;
	int flag;

	while (s1[count1] != '\0')
	count1++;
	while (s2[count2] != '\0')
	count2++;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			break;
		}
	}
	if (s1[i] < s2[i])
		flag =-1;
	if (s1[i] > s2[i])
		flag = 1;
	if (count1 == count2)
	{
		for (j = 0; j < i; j++)
		{
			if (s1[j] == s2[j])
				flag = 0;
		}
	}
	return (flag);
}
