#include "main.h"

/**
 * main - prints the alphabet in lower case"
 *
 * Return: zero if success
 */

void print_alphabet_x10(void);

/**
 * print_alphabet - prints the alphabet in reverse order"
 *
 * Return: returns nothing
 */
void print_alphabet_x10(void)
{
	int a = 0;
	int b;
	while (a <= 10)
	{
		b = 'a';
		while (b >= 'a' && b <= 'z')
		{
			_putchar(b);
			b = b + 1;
		}

		_putchar('\n');
		a++;
	}
}
