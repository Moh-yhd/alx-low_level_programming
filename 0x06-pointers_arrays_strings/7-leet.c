#include "main.h"

/**
 * leet - encodes a string in to 1337
 * @s: is a string
 * Return: a 1337 encoded string
 */

char *leet(char *s)
{
	char checker[] = "aeotl";
	char codder[] = "43071";
	int i, j;

	for (i = 0; checker[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[j] == checker[i] || s[j] == checker[i] - 32)
			{
				s[j] = codder[i];
			}
		}
	}
	return (s);
}
