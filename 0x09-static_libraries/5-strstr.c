#include "main.h"

/**
 * _strstr - locates a substing in a string
 * @haystack: is main string
 * @needle: is a substring
 * Return: a pointer to the begining of the substring,
 * or NULL if substing not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k;
	int flag1, flag2 = 0;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			flag1 = i;
			for (j = 0, k = i; needle[j] != '\0'; j++, k++)
			{
				if (haystack[k] != needle[j])
				{
					flag2 = 1;
					break;
				}
				else
					flag2 = 0;
			}
		}
	}
	if (flag2 == 0)
		return (haystack + flag1);
	else
		return ('\0');
}
