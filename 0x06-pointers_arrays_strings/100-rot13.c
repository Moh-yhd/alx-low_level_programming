#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: is a string
 * Return: rot13 encoded string s
 */

char *rot13(char *s)
{
	char checker[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char codder[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i =  0, j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; checker[j] != '\0'; j++)
		{
			if (s[i] == checker[j])
			{
				s[i] = codder[j];
				break;
			}
		}
	}
	return (s);
}


