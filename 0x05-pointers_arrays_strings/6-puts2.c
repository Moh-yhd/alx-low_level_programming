#include "main.h"

/**
 * puts2 - prints every other charachter
 * @str: is a string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	int j;
	int len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i - 1;
	for (j = 0; j <= len; j = j + 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
