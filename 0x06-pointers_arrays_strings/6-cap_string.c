#include "main.h"

/**
 * cap_string - capitalized every word of a string
 * @s: is a string
 * Return: a string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32 || s[i] == 9 || s[i] == 10 ||
				s[i] == ',' || s[i] == ';' ||
				s[i] == '.' || s[i] == '!' ||
				s[i] == '?' || s[i] == '"' ||
				s[i] == 40 || s[i] == 41 ||
				s[i] == 123 || s[i] == 125)
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
