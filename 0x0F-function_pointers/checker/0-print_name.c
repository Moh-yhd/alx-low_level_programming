#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: is the name to be printed
 * @f: is a function
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
