#include "main.h"

/**
 * string_toupper - converts lower case to upper case
 * @s: is a sting
 * Return:a string
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
