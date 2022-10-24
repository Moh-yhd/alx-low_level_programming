#include "main.h"

/**
 * puts2 - prints every other charachter
 * @str: is a string
 * Return: nothing
 */

void puts2(char *str)
{
	int i;
	
	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
		if (str[i] == '\n')
			break;
	}
	_putchar('\n');
}
