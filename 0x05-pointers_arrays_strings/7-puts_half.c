#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: is a string
 * Return: nothing
 */

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
	{
		i++;
	}
	j = (i - 1) / 2 + 1;
	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
