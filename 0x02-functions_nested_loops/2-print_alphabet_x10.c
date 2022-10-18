#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in ten times"
 *
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int a = 1;
	int b;

	while (a <= 10)
	{
		b = 'a';
		while (b >= 'a' && b <= 'z')
		{
			_putchar(b);
			b = b + 1;
		}
		a++;
		_putchar('\n');
	}
}
