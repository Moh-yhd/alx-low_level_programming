#include "main.h"

/**
 * binary_to_uint - converts binary to
 * unsigned int
 * @b: is a pointer to a string of a
 * string of binary number
 * Return: converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int i, twos = 1;
	int len = 0;

	if (b == NULL)
		return (0);
	while (b[len] != '\0')
		len++;

	n = 0;
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		n = n + (b[i] - '0') * twos;
		twos = twos * 2;
	}
	return (n);
}


