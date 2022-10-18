#include "main.h"

/**
 * main - prints the alphabet in lower case"
 *
 * Return: zero if success
 */

void print_alphabet(void);

/**
 * print_alphabet - prints the alphabet in reverse order"
 *
 * Return: returns nothing
 */
void print_alphabet(void)
{
	int a = 'a';

	while (a >= 'a' && a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
