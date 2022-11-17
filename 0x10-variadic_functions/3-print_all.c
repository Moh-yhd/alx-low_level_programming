#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints arguments passed to it
 * @format: is the type of the arguments passed
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list ap;
	fun_p fun_list[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_str},
		{'\0', NULL}
	};
	va_start(ap, format);
	i = 0;
	while (format && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == fun_list[j].format)
			{
				if (i)
				printf(", ");
				fun_list[j].f(&ap);
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}

/**
 * print_int - prints integers
 * @ap: ia an argument
 *
 * Return: nothing
 */
void print_int(va_list *ap)
{
	printf("%d", va_arg(*ap, int));
}

/**
 * print_str - prints strings
 * @ap: ia an argument
 *
 * Return: nothing
 */
void print_str(va_list *ap)
{
	printf("%s", va_arg(*ap, char *));
}

/**
 * print_char - prints chars
 * @ap: ia an argument
 *
 * Return: nothing
 */
void print_char(va_list *ap)
{
	printf("%c", va_arg(*ap, int));
}

/**
 * print_float - prints floats
 * @ap: ia an argument
 *
 * Return: nothing
 */
void print_float(va_list *ap)
{
	printf("%f", va_arg(*ap, double));
}


