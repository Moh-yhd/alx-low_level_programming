#include "main.h"

/**
 * _atoi - changes a string in to an integer
 * @s: s is a string
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0, j = 0, l = 0, m;
	unsigned int number = 0, k = 0;

	while (s[i] != '\n')
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			k = s[i] - '0';
			number = number * 10 + k;
			j++;
		}
		if (j > 0 && (s[i] < 48 || s[i] > 57))
			break;
		i++;
	}
	for (m = 0; m < (i - j); m++)
	{
		if (s[m] == 45)
			l++;
	}
	if (l % 2 != 0)
		number = number * -1;
	return (number);
}
