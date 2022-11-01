#include "main.h"
#include <stdio.h>
/**
 * _strspn - returns the number of bytes in the innitial segement of s
 * that contains all bytes from accept.
 * @s: is a string consisting the initial segement.
 * @accept: is the string that contains the bytes to be checked
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;
	unsigned int len = 0, flag = 0, flag2;

	while (accept[len] != '\0')
		len++;
	for (i = 0; s[i] != '\0'; i++)
	{
	for (j = 0; accept[j] != '\0'; j++)
	{
	if (s[i] == accept[j])
	{
		if (i == 0)
		{
			flag++;
		}
		else if (i > 0)
		{
			for (k = 0; k < i; k++)
			{
				if (s[k] == s[i])
				{
					flag2 = 0;
				}
				else
					flag2 = 1;
			}
		}
		flag = flag + flag2;
		break;
	}
		flag2 = 0;
	}
	if (flag == len)
		break;
	}
	return (i + 1);
}
