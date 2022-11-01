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
	unsigned int i, j, k, len = 0, flag = 0, flag2;
	while (accept[len] != '\0')
		len++;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				printf("loop entered because s[i] is equal to accept[j]\n");
				if (i == 0)
				{
					printf("if intered because i is 0\n");
					flag++;
				}
				else if (i > 0)
				{
					for (k = 0; k < i; k++)
					{
						printf("repeatition checker loop entered\n");
						printf("s[%u] = %c - %c s[%u]\n", k, s[k], s[i], i);
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
			printf("flag2 is %u\n", flag2);
			printf("s[%u] = %c - %c accept[%u]\n", i, s[i], accept[j], j);
			printf("j= %u - %u = i\nflag = %u\n", i, j, flag);
			flag2 = 0;
		}
		if (flag == len )
		{
			break;
			printf("it has break here flag = %u len  = %u\n", flag, len);
		}
	}

	return (i);
}
