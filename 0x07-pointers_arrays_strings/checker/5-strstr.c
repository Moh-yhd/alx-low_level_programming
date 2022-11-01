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
	int flag1, flag2 = 0, len1 = 0, len2 = 0;
	char *main_str = haystack, *sub_str = needle;
	char *p;

	while (main_str[len1] != '\0')
		len1++;
	while (sub_str[len2] != '\0')
		len2++;

	for (i = 0; main_str[i] != '\0'; i++)
	{
		if (main_str[i] == sub_str[0])
		{
			flag1 = i;
			if (len1 - i < len2)
				flag2 = 1;
			else if (len1 - i >= len2)
			{
			for (j = 0, k = i; sub_str[j] != '\0'; j++, k++)
			{
				if (main_str[k] != sub_str[j])
				{
					flag2 = 1;
					break;
				}
				else
					flag2 = 0;
			}
			}
		}
	}
	if (flag2 == 0)
	{
		p =  (main_str + flag1);
		return (p);
	}
	else
	return (0);
}
