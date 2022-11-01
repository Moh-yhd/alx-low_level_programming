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
	unsigned int i, j, len = 0, flag = 0;
	while (accept[len] != '\0')
		len++;
	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept [i] == s[j])
			{
				flag++;
			}
			printf("s[%u] = %c accept[%u] = %c\n", j, s[j], i, accept[i]);
			printf("j= %u - %u = i\nflag = %u\n", j, i, flag);
		}
		if (flag == len)
			break;
		flag = 0;
	}
	return (i);
}
