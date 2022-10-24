#include "main.h"

/**
 * puts2 - prints every other charachter
 * @str: is a string
 * Return: nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i / 2 == 0)
		{
			_putchar(str[i]);
		}
		i = i + 1;
	}
	_putchar('\n');
}
