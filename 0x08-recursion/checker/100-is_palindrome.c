#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome or not.
 * @s: is a string
 * @n: is an integer
 * @m: is an integer
 * Return: 1 if number is prime and -1 if it is not.
 */

int palindrome(char *s, int n, int m);

int _len(char *s);

int is_palindrome(char *s)
{
	int len;

	len = _len(s);
	if (len == 0)
		return (1);
	else
		return (palindrome(s, 0, len - 1));
}

/**
 * palindrome - checks if a if a sting is palindrome or not
 * @s: is a string
 * @n: is an integer
 * @m: is an integer representing str length
 * Return: 1 or zero
 */

int palindrome(char *s, int n, int m)
{
	if ((*(s + n) == *(s + m)) && (n == m || m == n + 1))
	{
		return (1);
	}
	else if ((*(s + n) == *(s + m)) && (n != m && m != n + 1))
	{
		return (palindrome(s, n + 1, m - 1));
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
