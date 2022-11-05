#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: is a string
 * Return: 1 if number is prime and -1 if it is not.
 */

int comp(char *, int, char *, int);

int _len(char *);

int wildcmp(char *s1, char *s2)
{
	int len1, len2;

	len1 = _len(s1);
	len2 = _len(s2);
	return ( comp(s1, len1 - 1, s2, len2 -1));
}

/**
 * palindrome - checks if a if a sting is palindrome or not
 * @s: is a string
 * @n: is an integer
 * @m: is an integer representing str length
 * Return: 1 or zero
 */

int comp(char *s1, int i, char *s2, int j)
{
	if (i == 0 && j == 0)
	{
		return (1);
	}
	else if (s1[i] == s2[j])
	{
		return (comp(s1, i - 1, s2, j - 1));
	}
	else if (s2[j] == '*')
	{
		if (j == 0)
		{
		return (1);
		}
		else 
		{
		return (comp(s1, i, s2, j - 1));
		}
	}
	else
	{
		return (0);
	}
}

/**
 * _len - caluculates the length of a string
 * @s: is a string
 * Return: an integer
 */

int _len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _len(s + 1));
	}
}
