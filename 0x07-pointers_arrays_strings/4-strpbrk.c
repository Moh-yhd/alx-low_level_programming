#include "main.h"

/**
 * _strpbrk - returns the first occurence of any byte of sting accept on
 * string s.
 * @s: is a string to look for the first occurence of byte of sting  accept
 * @accept: is a string whose occurence of any of its bytes in s is to be
 * returned.
 * Return: returns a pointer to the byte in s that matches accept
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	int flag = 0;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				flag = 1;
		}
		if (flag == 1)
			break;
	}
	if (flag == 0)
	{
		return ('\0');
	}
	p = s + i;
	return (p);
}

