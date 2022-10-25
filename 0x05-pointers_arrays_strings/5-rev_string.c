#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: is a string
 * Return: returns nothing
 */

void rev_string(char *s)
{
	char rev[1000], exc[1000];
	int j = 0, len = 0, i, k;

	while (s[len] != '\0')
	{
		len++;
	}
	k = len;
	len = len - 1;
	for (j = 0; j < k; j++)
	{
		rev[j] = s[len];
		len--;
	}
	for (i = 0; i < k; i++)
	{
		exc[i] = rev[i] + s[i];
		s[i] = exc[i] - s[i];
	}
}
