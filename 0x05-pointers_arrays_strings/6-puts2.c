#include "main.h"

/**
 * puts2 - prints every other charachter
 * @str: is a string
 * Return: nothing
 */

int _strlen(char *str);

void puts2(char *str)
{
	int i = 0;
	int count;

	count = _strlen(str);
	if (count % 2 == 0)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i = i + 2;
		}
	}

	else if (count % 2 != 0)
	{
		while (i != count - 1)
		{
			{
				_putchar(str[i]);
				i = i + 2;
			}
		}
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 *_strlen - calculates string length
 * @str: is a string
 * Return: string length
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
