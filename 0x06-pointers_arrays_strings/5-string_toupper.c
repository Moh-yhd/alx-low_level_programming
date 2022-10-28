#include "main.h"

/**
 * string_toupper - converts lower case to upper case
 * Return: pointer to a string
 */

char string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= a && s[i] <= z)
		{
			s[i] = s[i] - 32;
		}
		else
		{
			s[i] = s[i];
		}
	}
}
