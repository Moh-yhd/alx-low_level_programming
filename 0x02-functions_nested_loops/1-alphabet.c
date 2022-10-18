#include "main.h"

/**
 * main - prints the alphabet in lower case"
 *
 * Return: zero if success
 */

void print_alphabet(void);

void print_alphabet(void)
{
	int a = 'z';

	while (a <= 'z' && a >= 'a')
	{
		_putchar(a);
		a--;
	}
	_putchar('\n');
}
